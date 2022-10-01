// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAUTOSNAPSHOTSREQUEST_P_H
#define QTAWS_GETAUTOSNAPSHOTSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getautosnapshotsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetAutoSnapshotsRequest;

class GetAutoSnapshotsRequestPrivate : public LightsailRequestPrivate {

public:
    GetAutoSnapshotsRequestPrivate(const LightsailRequest::Action action,
                                   GetAutoSnapshotsRequest * const q);
    GetAutoSnapshotsRequestPrivate(const GetAutoSnapshotsRequestPrivate &other,
                                   GetAutoSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAutoSnapshotsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
