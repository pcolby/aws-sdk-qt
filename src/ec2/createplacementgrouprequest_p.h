// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLACEMENTGROUPREQUEST_P_H
#define QTAWS_CREATEPLACEMENTGROUPREQUEST_P_H

#include "ec2request_p.h"
#include "createplacementgrouprequest.h"

namespace QtAws {
namespace Ec2 {

class CreatePlacementGroupRequest;

class CreatePlacementGroupRequestPrivate : public Ec2RequestPrivate {

public:
    CreatePlacementGroupRequestPrivate(const Ec2Request::Action action,
                                   CreatePlacementGroupRequest * const q);
    CreatePlacementGroupRequestPrivate(const CreatePlacementGroupRequestPrivate &other,
                                   CreatePlacementGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePlacementGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
