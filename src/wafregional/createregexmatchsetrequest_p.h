// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXMATCHSETREQUEST_P_H
#define QTAWS_CREATEREGEXMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "createregexmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class CreateRegexMatchSetRequest;

class CreateRegexMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    CreateRegexMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   CreateRegexMatchSetRequest * const q);
    CreateRegexMatchSetRequestPrivate(const CreateRegexMatchSetRequestPrivate &other,
                                   CreateRegexMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRegexMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
