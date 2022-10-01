// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTOREDBCLUSTERFROMS3REQUEST_P_H
#define QTAWS_RESTOREDBCLUSTERFROMS3REQUEST_P_H

#include "rdsrequest_p.h"
#include "restoredbclusterfroms3request.h"

namespace QtAws {
namespace Rds {

class RestoreDBClusterFromS3Request;

class RestoreDBClusterFromS3RequestPrivate : public RdsRequestPrivate {

public:
    RestoreDBClusterFromS3RequestPrivate(const RdsRequest::Action action,
                                   RestoreDBClusterFromS3Request * const q);
    RestoreDBClusterFromS3RequestPrivate(const RestoreDBClusterFromS3RequestPrivate &other,
                                   RestoreDBClusterFromS3Request * const q);

private:
    Q_DECLARE_PUBLIC(RestoreDBClusterFromS3Request)

};

} // namespace Rds
} // namespace QtAws

#endif
