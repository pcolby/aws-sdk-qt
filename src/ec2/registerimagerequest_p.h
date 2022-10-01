// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERIMAGEREQUEST_P_H
#define QTAWS_REGISTERIMAGEREQUEST_P_H

#include "ec2request_p.h"
#include "registerimagerequest.h"

namespace QtAws {
namespace Ec2 {

class RegisterImageRequest;

class RegisterImageRequestPrivate : public Ec2RequestPrivate {

public:
    RegisterImageRequestPrivate(const Ec2Request::Action action,
                                   RegisterImageRequest * const q);
    RegisterImageRequestPrivate(const RegisterImageRequestPrivate &other,
                                   RegisterImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterImageRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
