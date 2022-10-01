// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNDEPRECATEDOMAINREQUEST_P_H
#define QTAWS_UNDEPRECATEDOMAINREQUEST_P_H

#include "swfrequest_p.h"
#include "undeprecatedomainrequest.h"

namespace QtAws {
namespace Swf {

class UndeprecateDomainRequest;

class UndeprecateDomainRequestPrivate : public SwfRequestPrivate {

public:
    UndeprecateDomainRequestPrivate(const SwfRequest::Action action,
                                   UndeprecateDomainRequest * const q);
    UndeprecateDomainRequestPrivate(const UndeprecateDomainRequestPrivate &other,
                                   UndeprecateDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(UndeprecateDomainRequest)

};

} // namespace Swf
} // namespace QtAws

#endif
