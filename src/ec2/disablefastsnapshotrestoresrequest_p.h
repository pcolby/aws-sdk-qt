// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEFASTSNAPSHOTRESTORESREQUEST_P_H
#define QTAWS_DISABLEFASTSNAPSHOTRESTORESREQUEST_P_H

#include "ec2request_p.h"
#include "disablefastsnapshotrestoresrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableFastSnapshotRestoresRequest;

class DisableFastSnapshotRestoresRequestPrivate : public Ec2RequestPrivate {

public:
    DisableFastSnapshotRestoresRequestPrivate(const Ec2Request::Action action,
                                   DisableFastSnapshotRestoresRequest * const q);
    DisableFastSnapshotRestoresRequestPrivate(const DisableFastSnapshotRestoresRequestPrivate &other,
                                   DisableFastSnapshotRestoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableFastSnapshotRestoresRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
