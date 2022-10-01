// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTLIMITSREQUEST_P_H
#define QTAWS_GETSNAPSHOTLIMITSREQUEST_P_H

#include "directoryservicerequest_p.h"
#include "getsnapshotlimitsrequest.h"

namespace QtAws {
namespace DirectoryService {

class GetSnapshotLimitsRequest;

class GetSnapshotLimitsRequestPrivate : public DirectoryServiceRequestPrivate {

public:
    GetSnapshotLimitsRequestPrivate(const DirectoryServiceRequest::Action action,
                                   GetSnapshotLimitsRequest * const q);
    GetSnapshotLimitsRequestPrivate(const GetSnapshotLimitsRequestPrivate &other,
                                   GetSnapshotLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSnapshotLimitsRequest)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
