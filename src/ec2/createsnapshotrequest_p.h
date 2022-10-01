// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTREQUEST_P_H
#define QTAWS_CREATESNAPSHOTREQUEST_P_H

#include "ec2request_p.h"
#include "createsnapshotrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSnapshotRequest;

class CreateSnapshotRequestPrivate : public Ec2RequestPrivate {

public:
    CreateSnapshotRequestPrivate(const Ec2Request::Action action,
                                   CreateSnapshotRequest * const q);
    CreateSnapshotRequestPrivate(const CreateSnapshotRequestPrivate &other,
                                   CreateSnapshotRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
