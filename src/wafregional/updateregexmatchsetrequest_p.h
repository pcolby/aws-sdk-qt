// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXMATCHSETREQUEST_P_H
#define QTAWS_UPDATEREGEXMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updateregexmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRegexMatchSetRequest;

class UpdateRegexMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateRegexMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateRegexMatchSetRequest * const q);
    UpdateRegexMatchSetRequestPrivate(const UpdateRegexMatchSetRequestPrivate &other,
                                   UpdateRegexMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRegexMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
