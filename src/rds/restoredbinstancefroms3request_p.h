// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBINSTANCEFROMS3REQUEST_P_H
#define QTAWS_RESTOREDBINSTANCEFROMS3REQUEST_P_H

#include "rdsrequest_p.h"
#include "restoredbinstancefroms3request.h"

namespace QtAws {
namespace Rds {

class RestoreDBInstanceFromS3Request;

class RestoreDBInstanceFromS3RequestPrivate : public RdsRequestPrivate {

public:
    RestoreDBInstanceFromS3RequestPrivate(const RdsRequest::Action action,
                                   RestoreDBInstanceFromS3Request * const q);
    RestoreDBInstanceFromS3RequestPrivate(const RestoreDBInstanceFromS3RequestPrivate &other,
                                   RestoreDBInstanceFromS3Request * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBInstanceFromS3Request)

};

} // namespace Rds
} // namespace QtAws

#endif
