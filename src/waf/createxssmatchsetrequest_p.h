// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEXSSMATCHSETREQUEST_P_H
#define QTAWS_CREATEXSSMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "createxssmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateXssMatchSetRequest;

class CreateXssMatchSetRequestPrivate : public WafRequestPrivate {

public:
    CreateXssMatchSetRequestPrivate(const WafRequest::Action action,
                                   CreateXssMatchSetRequest * const q);
    CreateXssMatchSetRequestPrivate(const CreateXssMatchSetRequestPrivate &other,
                                   CreateXssMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateXssMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
