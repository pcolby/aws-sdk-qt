// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPHONENUMBERORDERREQUEST_P_H
#define QTAWS_CREATEPHONENUMBERORDERREQUEST_P_H

#include "chimerequest_p.h"
#include "createphonenumberorderrequest.h"

namespace QtAws {
namespace Chime {

class CreatePhoneNumberOrderRequest;

class CreatePhoneNumberOrderRequestPrivate : public ChimeRequestPrivate {

public:
    CreatePhoneNumberOrderRequestPrivate(const ChimeRequest::Action action,
                                   CreatePhoneNumberOrderRequest * const q);
    CreatePhoneNumberOrderRequestPrivate(const CreatePhoneNumberOrderRequestPrivate &other,
                                   CreatePhoneNumberOrderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePhoneNumberOrderRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
