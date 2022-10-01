// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYSNAPSHOTREQUEST_P_H
#define QTAWS_COPYSNAPSHOTREQUEST_P_H

#include "lightsailrequest_p.h"
#include "copysnapshotrequest.h"

namespace QtAws {
namespace Lightsail {

class CopySnapshotRequest;

class CopySnapshotRequestPrivate : public LightsailRequestPrivate {

public:
    CopySnapshotRequestPrivate(const LightsailRequest::Action action,
                                   CopySnapshotRequest * const q);
    CopySnapshotRequestPrivate(const CopySnapshotRequestPrivate &other,
                                   CopySnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CopySnapshotRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
