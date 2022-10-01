// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKIFPHONENUMBERISOPTEDOUTREQUEST_P_H
#define QTAWS_CHECKIFPHONENUMBERISOPTEDOUTREQUEST_P_H

#include "snsrequest_p.h"
#include "checkifphonenumberisoptedoutrequest.h"

namespace QtAws {
namespace Sns {

class CheckIfPhoneNumberIsOptedOutRequest;

class CheckIfPhoneNumberIsOptedOutRequestPrivate : public SnsRequestPrivate {

public:
    CheckIfPhoneNumberIsOptedOutRequestPrivate(const SnsRequest::Action action,
                                   CheckIfPhoneNumberIsOptedOutRequest * const q);
    CheckIfPhoneNumberIsOptedOutRequestPrivate(const CheckIfPhoneNumberIsOptedOutRequestPrivate &other,
                                   CheckIfPhoneNumberIsOptedOutRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckIfPhoneNumberIsOptedOutRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
