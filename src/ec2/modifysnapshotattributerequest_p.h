// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSNAPSHOTATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYSNAPSHOTATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "modifysnapshotattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySnapshotAttributeRequest;

class ModifySnapshotAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifySnapshotAttributeRequestPrivate(const Ec2Request::Action action,
                                   ModifySnapshotAttributeRequest * const q);
    ModifySnapshotAttributeRequestPrivate(const ModifySnapshotAttributeRequestPrivate &other,
                                   ModifySnapshotAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifySnapshotAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
