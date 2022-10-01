// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXPATTERNSETREQUEST_P_H
#define QTAWS_DELETEREGEXPATTERNSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deleteregexpatternsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRegexPatternSetRequest;

class DeleteRegexPatternSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteRegexPatternSetRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteRegexPatternSetRequest * const q);
    DeleteRegexPatternSetRequestPrivate(const DeleteRegexPatternSetRequestPrivate &other,
                                   DeleteRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRegexPatternSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
