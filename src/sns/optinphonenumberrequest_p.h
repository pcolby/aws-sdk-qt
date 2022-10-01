// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_OPTINPHONENUMBERREQUEST_P_H
#define QTAWS_OPTINPHONENUMBERREQUEST_P_H

#include "snsrequest_p.h"
#include "optinphonenumberrequest.h"

namespace QtAws {
namespace Sns {

class OptInPhoneNumberRequest;

class OptInPhoneNumberRequestPrivate : public SnsRequestPrivate {

public:
    OptInPhoneNumberRequestPrivate(const SnsRequest::Action action,
                                   OptInPhoneNumberRequest * const q);
    OptInPhoneNumberRequestPrivate(const OptInPhoneNumberRequestPrivate &other,
                                   OptInPhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(OptInPhoneNumberRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
