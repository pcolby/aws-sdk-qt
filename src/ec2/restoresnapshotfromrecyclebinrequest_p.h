// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESTORESNAPSHOTFROMRECYCLEBINREQUEST_P_H
#define QTAWS_RESTORESNAPSHOTFROMRECYCLEBINREQUEST_P_H

#include "ec2request_p.h"
#include "restoresnapshotfromrecyclebinrequest.h"

namespace QtAws {
namespace Ec2 {

class RestoreSnapshotFromRecycleBinRequest;

class RestoreSnapshotFromRecycleBinRequestPrivate : public Ec2RequestPrivate {

public:
    RestoreSnapshotFromRecycleBinRequestPrivate(const Ec2Request::Action action,
                                   RestoreSnapshotFromRecycleBinRequest * const q);
    RestoreSnapshotFromRecycleBinRequestPrivate(const RestoreSnapshotFromRecycleBinRequestPrivate &other,
                                   RestoreSnapshotFromRecycleBinRequest * const q);

private:
    Q_DECLARE_PUBLIC(RestoreSnapshotFromRecycleBinRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
