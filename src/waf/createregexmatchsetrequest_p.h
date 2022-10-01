// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXMATCHSETREQUEST_P_H
#define QTAWS_CREATEREGEXMATCHSETREQUEST_P_H

#include "wafrequest_p.h"
#include "createregexmatchsetrequest.h"

namespace QtAws {
namespace Waf {

class CreateRegexMatchSetRequest;

class CreateRegexMatchSetRequestPrivate : public WafRequestPrivate {

public:
    CreateRegexMatchSetRequestPrivate(const WafRequest::Action action,
                                   CreateRegexMatchSetRequest * const q);
    CreateRegexMatchSetRequestPrivate(const CreateRegexMatchSetRequestPrivate &other,
                                   CreateRegexMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRegexMatchSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
