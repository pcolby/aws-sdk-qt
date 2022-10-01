// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEIMAGEDEPRECATIONREQUEST_P_H
#define QTAWS_DISABLEIMAGEDEPRECATIONREQUEST_P_H

#include "ec2request_p.h"
#include "disableimagedeprecationrequest.h"

namespace QtAws {
namespace Ec2 {

class DisableImageDeprecationRequest;

class DisableImageDeprecationRequestPrivate : public Ec2RequestPrivate {

public:
    DisableImageDeprecationRequestPrivate(const Ec2Request::Action action,
                                   DisableImageDeprecationRequest * const q);
    DisableImageDeprecationRequestPrivate(const DisableImageDeprecationRequestPrivate &other,
                                   DisableImageDeprecationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableImageDeprecationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
