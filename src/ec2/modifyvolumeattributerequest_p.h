// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVOLUMEATTRIBUTEREQUEST_P_H
#define QTAWS_MODIFYVOLUMEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvolumeattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVolumeAttributeRequest;

class ModifyVolumeAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVolumeAttributeRequestPrivate(const Ec2Request::Action action,
                                   ModifyVolumeAttributeRequest * const q);
    ModifyVolumeAttributeRequestPrivate(const ModifyVolumeAttributeRequestPrivate &other,
                                   ModifyVolumeAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVolumeAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
