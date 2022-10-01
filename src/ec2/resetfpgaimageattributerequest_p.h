// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETFPGAIMAGEATTRIBUTEREQUEST_P_H
#define QTAWS_RESETFPGAIMAGEATTRIBUTEREQUEST_P_H

#include "ec2request_p.h"
#include "resetfpgaimageattributerequest.h"

namespace QtAws {
namespace Ec2 {

class ResetFpgaImageAttributeRequest;

class ResetFpgaImageAttributeRequestPrivate : public Ec2RequestPrivate {

public:
    ResetFpgaImageAttributeRequestPrivate(const Ec2Request::Action action,
                                   ResetFpgaImageAttributeRequest * const q);
    ResetFpgaImageAttributeRequestPrivate(const ResetFpgaImageAttributeRequestPrivate &other,
                                   ResetFpgaImageAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetFpgaImageAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
