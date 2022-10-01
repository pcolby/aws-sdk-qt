// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXMATCHSETREQUEST_P_H
#define QTAWS_DELETEREGEXMATCHSETREQUEST_P_H

#include "wafregionalrequest_p.h"
#include "deleteregexmatchsetrequest.h"

namespace QtAws {
namespace WafRegional {

class DeleteRegexMatchSetRequest;

class DeleteRegexMatchSetRequestPrivate : public WafRegionalRequestPrivate {

public:
    DeleteRegexMatchSetRequestPrivate(const WafRegionalRequest::Action action,
                                   DeleteRegexMatchSetRequest * const q);
    DeleteRegexMatchSetRequestPrivate(const DeleteRegexMatchSetRequestPrivate &other,
                                   DeleteRegexMatchSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRegexMatchSetRequest)

};

} // namespace WafRegional
} // namespace QtAws

#endif
