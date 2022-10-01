// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SIGNOUTUSERREQUEST_P_H
#define QTAWS_SIGNOUTUSERREQUEST_P_H

#include "worklinkrequest_p.h"
#include "signoutuserrequest.h"

namespace QtAws {
namespace WorkLink {

class SignOutUserRequest;

class SignOutUserRequestPrivate : public WorkLinkRequestPrivate {

public:
    SignOutUserRequestPrivate(const WorkLinkRequest::Action action,
                                   SignOutUserRequest * const q);
    SignOutUserRequestPrivate(const SignOutUserRequestPrivate &other,
                                   SignOutUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(SignOutUserRequest)

};

} // namespace WorkLink
} // namespace QtAws

#endif
