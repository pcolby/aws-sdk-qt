// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVOLUMEREQUEST_P_H
#define QTAWS_ATTACHVOLUMEREQUEST_P_H

#include "ec2request_p.h"
#include "attachvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class AttachVolumeRequest;

class AttachVolumeRequestPrivate : public Ec2RequestPrivate {

public:
    AttachVolumeRequestPrivate(const Ec2Request::Action action,
                                   AttachVolumeRequest * const q);
    AttachVolumeRequestPrivate(const AttachVolumeRequestPrivate &other,
                                   AttachVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(AttachVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
