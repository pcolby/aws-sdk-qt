// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVOLUMEREQUEST_P_H
#define QTAWS_CREATEVOLUMEREQUEST_P_H

#include "ec2request_p.h"
#include "createvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVolumeRequest;

class CreateVolumeRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVolumeRequestPrivate(const Ec2Request::Action action,
                                   CreateVolumeRequest * const q);
    CreateVolumeRequestPrivate(const CreateVolumeRequestPrivate &other,
                                   CreateVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
