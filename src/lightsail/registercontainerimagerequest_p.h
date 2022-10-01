// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONTAINERIMAGEREQUEST_P_H
#define QTAWS_REGISTERCONTAINERIMAGEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "registercontainerimagerequest.h"

namespace QtAws {
namespace Lightsail {

class RegisterContainerImageRequest;

class RegisterContainerImageRequestPrivate : public LightsailRequestPrivate {

public:
    RegisterContainerImageRequestPrivate(const LightsailRequest::Action action,
                                   RegisterContainerImageRequest * const q);
    RegisterContainerImageRequestPrivate(const RegisterContainerImageRequestPrivate &other,
                                   RegisterContainerImageRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterContainerImageRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
