// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERTOPOINTINTIMEREQUEST_H
#define QTAWS_RESTOREDBCLUSTERTOPOINTINTIMEREQUEST_H

#include "docdbrequest.h"

namespace QtAws {
namespace DocDb {

class RestoreDBClusterToPointInTimeRequestPrivate;

class QTAWSDOCDB_EXPORT RestoreDBClusterToPointInTimeRequest : public DocDbRequest {

public:
    RestoreDBClusterToPointInTimeRequest(const RestoreDBClusterToPointInTimeRequest &other);
    RestoreDBClusterToPointInTimeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBClusterToPointInTimeRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
