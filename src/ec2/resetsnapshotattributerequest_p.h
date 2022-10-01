// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETSNAPSHOTATTRIBUTEREQUEST_P_H
#define QTAWS_RESETSNAPSHOTATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "resetsnapshotattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetSnapshotAttributeRequest;

class ResetSnapshotAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ResetSnapshotAttributeRequestPrivate(const Ec2Request::Action action,
                                   ResetSnapshotAttributeRequest * const q);
    ResetSnapshotAttributeRequestPrivate(const ResetSnapshotAttributeRequestPrivate &other,
                                   ResetSnapshotAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetSnapshotAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
