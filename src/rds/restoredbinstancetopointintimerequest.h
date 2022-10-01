// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCETOPOINTINTIMEREQUEST_H
#define QTAWS_RESTOREDBINSTANCETOPOINTINTIMEREQUEST_H

#include "rdsrequest.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceToPointInTimeRequestPrivate;

class QTAWSRDS_EXPORT RestoreDBInstanceToPointInTimeRequest : public RdsRequest {

public:
    RestoreDBInstanceToPointInTimeRequest(const RestoreDBInstanceToPointInTimeRequest &other);
    RestoreDBInstanceToPointInTimeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RestoreDBInstanceToPointInTimeRequest)

};

} // namespace Rds
} // namespace QtAws

#endif
