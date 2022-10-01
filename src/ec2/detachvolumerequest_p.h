// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVOLUMEREQUEST_P_H
#define QTAWS_DETACHVOLUMEREQUEST_P_H

#include "ec2request_p.h"
#include "detachvolumerequest.h"

namespace QtAws {
namespace Ec2 {

class DetachVolumeRequest;

class DetachVolumeRequestPrivate : public Ec2RequestPrivate {

public:
    DetachVolumeRequestPrivate(const Ec2Request::Action action,
                                   DetachVolumeRequest * const q);
    DetachVolumeRequestPrivate(const DetachVolumeRequestPrivate &other,
                                   DetachVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DetachVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
