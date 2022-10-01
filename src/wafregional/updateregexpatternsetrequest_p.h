// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXPATTERNSETREQUEST_P_H
#define QTAWS_UPDATEREGEXPATTERNSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "updateregexpatternsetrequest.h"

namespace QtAws {
namespace WafRegional {

class UpdateRegexPatternSetRequest;

class UpdateRegexPatternSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    UpdateRegexPatternSetRequestPrivate(const WafRegionalRequest::Action action,
                                   UpdateRegexPatternSetRequest * const q);
    UpdateRegexPatternSetRequestPrivate(const UpdateRegexPatternSetRequestPrivate &other,
                                   UpdateRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRegexPatternSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
