// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FAILOVERDBCLUSTERREQUEST_H
#define QTAWS_FAILOVERDBCLUSTERREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class FailoverDBClusterRequestPrivate;

class QTAWSRDS_EXPORT FailoverDBClusterRequest : public RdsRequest {

public:
    FailoverDBClusterRequest(const FailoverDBClusterRequest &other);
    FailoverDBClusterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(FailoverDBClusterRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
