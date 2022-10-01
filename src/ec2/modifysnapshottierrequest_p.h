// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTTIERREQUEST_P_H
#define QTAWS_MODIFYSNAPSHOTTIERREQUEST_P_H

#include "ec2request_p.h"
#include "modifysnapshottierrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySnapshotTierRequest;

class ModifySnapshotTierRequestPrivate : public Ec2RequestPrivate {

public:
    ModifySnapshotTierRequestPrivate(const Ec2Request::Action action,
                                   ModifySnapshotTierRequest * const q);
    ModifySnapshotTierRequestPrivate(const ModifySnapshotTierRequestPrivate &other,
                                   ModifySnapshotTierRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifySnapshotTierRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
