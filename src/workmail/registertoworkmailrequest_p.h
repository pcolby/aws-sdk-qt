// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERTOWORKMAILREQUEST_P_H
#define QTAWS_REGISTERTOWORKMAILREQUEST_P_H

#include "workmailrequest_p.h"
#include "registertoworkmailrequest.h"

namespace QtAws {
namespace WorkMail {

class RegisterToWorkMailRequest;

class RegisterToWorkMailRequestPrivate : public WorkMailRequestPrivate {

public:
    RegisterToWorkMailRequestPrivate(const WorkMailRequest::Action action,
                                   RegisterToWorkMailRequest * const q);
    RegisterToWorkMailRequestPrivate(const RegisterToWorkMailRequestPrivate &other,
                                   RegisterToWorkMailRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterToWorkMailRequest)

};

} // namespace WorkMail
} // namespace QtAws

#endif
