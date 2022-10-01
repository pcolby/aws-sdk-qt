// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYEMAILADDRESSREQUEST_P_H
#define QTAWS_VERIFYEMAILADDRESSREQUEST_P_H

#include "sesrequest_p.h"
#include "verifyemailaddressrequest.h"

namespace QtAws {
namespace Ses {

class VerifyEmailAddressRequest;

class VerifyEmailAddressRequestPrivate : public SesRequestPrivate {

public:
    VerifyEmailAddressRequestPrivate(const SesRequest::Action action,
                                   VerifyEmailAddressRequest * const q);
    VerifyEmailAddressRequestPrivate(const VerifyEmailAddressRequestPrivate &other,
                                   VerifyEmailAddressRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyEmailAddressRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
