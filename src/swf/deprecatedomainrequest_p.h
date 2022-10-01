// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEPRECATEDOMAINREQUEST_P_H
#define QTAWS_DEPRECATEDOMAINREQUEST_P_H

#include "swfrequest_p.h"
#include "deprecatedomainrequest.h"

namespace QtAws {
namespace Swf {

class DeprecateDomainRequest;

class DeprecateDomainRequestPrivate : public SwfRequestPrivate {

public:
    DeprecateDomainRequestPrivate(const SwfRequest::Action action,
                                   DeprecateDomainRequest * const q);
    DeprecateDomainRequestPrivate(const DeprecateDomainRequestPrivate &other,
                                   DeprecateDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeprecateDomainRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
