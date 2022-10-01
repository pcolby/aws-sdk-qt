// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFASTSNAPSHOTRESTORESREQUEST_P_H
#define QTAWS_DESCRIBEFASTSNAPSHOTRESTORESREQUEST_P_H

#include "ec2request_p.h"
#include "describefastsnapshotrestoresrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeFastSnapshotRestoresRequest;

class DescribeFastSnapshotRestoresRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeFastSnapshotRestoresRequestPrivate(const Ec2Request::Action action,
                                   DescribeFastSnapshotRestoresRequest * const q);
    DescribeFastSnapshotRestoresRequestPrivate(const DescribeFastSnapshotRestoresRequestPrivate &other,
                                   DescribeFastSnapshotRestoresRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFastSnapshotRestoresRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
