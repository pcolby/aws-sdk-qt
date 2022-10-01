// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVOLUMEREQUEST_P_H
#define QTAWS_MODIFYVOLUMEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyVolumeRequest;

class ModifyVolumeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyVolumeRequestPrivate(const Ec2Request::Action action,
                                   ModifyVolumeRequest * const q);
    ModifyVolumeRequestPrivate(const ModifyVolumeRequestPrivate &other,
                                   ModifyVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
