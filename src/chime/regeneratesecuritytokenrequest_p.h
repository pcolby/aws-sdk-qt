// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGENERATESECURITYTOKENREQUEST_P_H
#define QTAWS_REGENERATESECURITYTOKENREQUEST_P_H

#include "chimerequest_p.h"
#include "regeneratesecuritytokenrequest.h"

namespace QtAws {
namespace Chime {

class RegenerateSecurityTokenRequest;

class RegenerateSecurityTokenRequestPrivate : public ChimeRequestPrivate {

public:
    RegenerateSecurityTokenRequestPrivate(const ChimeRequest::Action action,
                                   RegenerateSecurityTokenRequest * const q);
    RegenerateSecurityTokenRequestPrivate(const RegenerateSecurityTokenRequestPrivate &other,
                                   RegenerateSecurityTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegenerateSecurityTokenRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
