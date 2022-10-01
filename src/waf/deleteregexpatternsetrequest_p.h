// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXPATTERNSETREQUEST_P_H
#define QTAWS_DELETEREGEXPATTERNSETREQUEST_P_H

#include "wafrequest_p.h"
#include "deleteregexpatternsetrequest.h"

namespace QtAws {
namespace Waf {

class DeleteRegexPatternSetRequest;

class DeleteRegexPatternSetRequestPrivate : public WafRequestPrivate {

public:
    DeleteRegexPatternSetRequestPrivate(const WafRequest::Action action,
                                   DeleteRegexPatternSetRequest * const q);
    DeleteRegexPatternSetRequestPrivate(const DeleteRegexPatternSetRequestPrivate &other,
                                   DeleteRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteRegexPatternSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
