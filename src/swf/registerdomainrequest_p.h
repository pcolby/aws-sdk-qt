// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDOMAINREQUEST_P_H
#define QTAWS_REGISTERDOMAINREQUEST_P_H

#include "swfrequest_p.h"
#include "registerdomainrequest.h"

namespace QtAws {
namespace Swf {

class RegisterDomainRequest;

class RegisterDomainRequestPrivate : public SwfRequestPrivate {

public:
    RegisterDomainRequestPrivate(const SwfRequest::Action action,
                                   RegisterDomainRequest * const q);
    RegisterDomainRequestPrivate(const RegisterDomainRequestPrivate &other,
                                   RegisterDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterDomainRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
