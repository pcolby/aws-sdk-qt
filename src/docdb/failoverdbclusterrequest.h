// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERDBCLUSTERREQUEST_H
#define QTAWS_FAILOVERDBCLUSTERREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class FailoverDBClusterRequestPrivate;

class QTAWSDOCDB_EXPORT FailoverDBClusterRequest : public DocDbRequest {

public:
    FailoverDBClusterRequest(const FailoverDBClusterRequest &other);
    FailoverDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverDBClusterRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
