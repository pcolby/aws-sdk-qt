// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPLACEMENTGROUPREQUEST_P_H
#define QTAWS_DELETEPLACEMENTGROUPREQUEST_P_H

#include "ec2request_p.h"
#include "deleteplacementgrouprequest.h"

namespace QtAws {
namespace Ec2 {

class DeletePlacementGroupRequest;

class DeletePlacementGroupRequestPrivate : public Ec2RequestPrivate {

public:
    DeletePlacementGroupRequestPrivate(const Ec2Request::Action action,
                                   DeletePlacementGroupRequest * const q);
    DeletePlacementGroupRequestPrivate(const DeletePlacementGroupRequestPrivate &other,
                                   DeletePlacementGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePlacementGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
