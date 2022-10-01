// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESNAPSHOTTIERREQUEST_P_H
#define QTAWS_RESTORESNAPSHOTTIERREQUEST_P_H

#include "ec2request_p.h"
#include "restoresnapshottierrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreSnapshotTierRequest;

class RestoreSnapshotTierRequestPrivate : public Ec2RequestPrivate {

public:
    RestoreSnapshotTierRequestPrivate(const Ec2Request::Action action,
                                   RestoreSnapshotTierRequest * const q);
    RestoreSnapshotTierRequestPrivate(const RestoreSnapshotTierRequestPrivate &other,
                                   RestoreSnapshotTierRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreSnapshotTierRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
