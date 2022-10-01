// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOLUMEREQUEST_P_H
#define QTAWS_DELETEVOLUMEREQUEST_P_H

#include "ec2request_p.h"
#include "deletevolumerequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVolumeRequest;

class DeleteVolumeRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVolumeRequestPrivate(const Ec2Request::Action action,
                                   DeleteVolumeRequest * const q);
    DeleteVolumeRequestPrivate(const DeleteVolumeRequestPrivate &other,
                                   DeleteVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVolumeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
