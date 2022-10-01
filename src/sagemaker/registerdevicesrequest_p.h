// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEVICESREQUEST_P_H
#define QTAWS_REGISTERDEVICESREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "registerdevicesrequest.h"

namespace QtAws {
namespace SageMaker {

class RegisterDevicesRequest;

class RegisterDevicesRequestPrivate : public SageMakerRequestPrivate {

public:
    RegisterDevicesRequestPrivate(const SageMakerRequest::Action action,
                                   RegisterDevicesRequest * const q);
    RegisterDevicesRequestPrivate(const RegisterDevicesRequestPrivate &other,
                                   RegisterDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterDevicesRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
