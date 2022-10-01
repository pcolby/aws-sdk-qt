// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTSREQUEST_P_H
#define QTAWS_CREATESNAPSHOTSREQUEST_P_H

#include "ec2request_p.h"
#include "createsnapshotsrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSnapshotsRequest;

class CreateSnapshotsRequestPrivate : public Ec2RequestPrivate {

public:
    CreateSnapshotsRequestPrivate(const Ec2Request::Action action,
                                   CreateSnapshotsRequest * const q);
    CreateSnapshotsRequestPrivate(const CreateSnapshotsRequestPrivate &other,
                                   CreateSnapshotsRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
