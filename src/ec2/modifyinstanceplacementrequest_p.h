// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYINSTANCEPLACEMENTREQUEST_P_H
#define QTAWS_MODIFYINSTANCEPLACEMENTREQUEST_P_H

#include "ec2request_p.h"
#include "modifyinstanceplacementrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyInstancePlacementRequest;

class ModifyInstancePlacementRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyInstancePlacementRequestPrivate(const Ec2Request::Action action,
                                   ModifyInstancePlacementRequest * const q);
    ModifyInstancePlacementRequestPrivate(const ModifyInstancePlacementRequestPrivate &other,
                                   ModifyInstancePlacementRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyInstancePlacementRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
