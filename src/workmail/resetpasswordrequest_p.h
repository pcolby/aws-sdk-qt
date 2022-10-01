// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETPASSWORDREQUEST_P_H
#define QTAWS_RESETPASSWORDREQUEST_P_H

#include "workmailrequest_p.h"
#include "resetpasswordrequest.h"

namespace QtAws {
namespace WorkMail {

class ResetPasswordRequest;

class ResetPasswordRequestPrivate : public WorkMailRequestPrivate {

public:
    ResetPasswordRequestPrivate(const WorkMailRequest::Action action,
                                   ResetPasswordRequest * const q);
    ResetPasswordRequestPrivate(const ResetPasswordRequestPrivate &other,
                                   ResetPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetPasswordRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
