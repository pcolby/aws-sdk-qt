// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEPLOYABLEPATCHSNAPSHOTFORINSTANCEREQUEST_P_H
#define QTAWS_GETDEPLOYABLEPATCHSNAPSHOTFORINSTANCEREQUEST_P_H

#include "ssmrequest_p.h"
#include "getdeployablepatchsnapshotforinstancerequest.h"

namespace QtAws {
namespace Ssm {

class GetDeployablePatchSnapshotForInstanceRequest;

class GetDeployablePatchSnapshotForInstanceRequestPrivate : public SsmRequestPrivate {

public:
    GetDeployablePatchSnapshotForInstanceRequestPrivate(const SsmRequest::Action action,
                                   GetDeployablePatchSnapshotForInstanceRequest * const q);
    GetDeployablePatchSnapshotForInstanceRequestPrivate(const GetDeployablePatchSnapshotForInstanceRequestPrivate &other,
                                   GetDeployablePatchSnapshotForInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetDeployablePatchSnapshotForInstanceRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
