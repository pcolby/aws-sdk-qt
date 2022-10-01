// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEIMAGEDEPRECATIONREQUEST_P_H
#define QTAWS_ENABLEIMAGEDEPRECATIONREQUEST_P_H

#include "ec2request_p.h"
#include "enableimagedeprecationrequest.h"

namespace QtAws {
namespace Ec2 {

class EnableImageDeprecationRequest;

class EnableImageDeprecationRequestPrivate : public Ec2RequestPrivate {

public:
    EnableImageDeprecationRequestPrivate(const Ec2Request::Action action,
                                   EnableImageDeprecationRequest * const q);
    EnableImageDeprecationRequestPrivate(const EnableImageDeprecationRequestPrivate &other,
                                   EnableImageDeprecationRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableImageDeprecationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
