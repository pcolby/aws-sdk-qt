// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERUSERREQUEST_P_H
#define QTAWS_REGISTERUSERREQUEST_P_H

#include "quicksightrequest_p.h"
#include "registeruserrequest.h"

namespace QtAws {
namespace QuickSight {

class RegisterUserRequest;

class RegisterUserRequestPrivate : public QuickSightRequestPrivate {

public:
    RegisterUserRequestPrivate(const QuickSightRequest::Action action,
                                   RegisterUserRequest * const q);
    RegisterUserRequestPrivate(const RegisterUserRequestPrivate &other,
                                   RegisterUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterUserRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
