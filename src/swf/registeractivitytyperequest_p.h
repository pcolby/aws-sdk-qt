// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERACTIVITYTYPEREQUEST_P_H
#define QTAWS_REGISTERACTIVITYTYPEREQUEST_P_H

#include "swfrequest_p.h"
#include "registeractivitytyperequest.h"

namespace QtAws {
namespace Swf {

class RegisterActivityTypeRequest;

class RegisterActivityTypeRequestPrivate : public SwfRequestPrivate {

public:
    RegisterActivityTypeRequestPrivate(const SwfRequest::Action action,
                                   RegisterActivityTypeRequest * const q);
    RegisterActivityTypeRequestPrivate(const RegisterActivityTypeRequestPrivate &other,
                                   RegisterActivityTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterActivityTypeRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
