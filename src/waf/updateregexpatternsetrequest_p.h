// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXPATTERNSETREQUEST_P_H
#define QTAWS_UPDATEREGEXPATTERNSETREQUEST_P_H

#include "wafrequest_p.h"
#include "updateregexpatternsetrequest.h"

namespace QtAws {
namespace Waf {

class UpdateRegexPatternSetRequest;

class UpdateRegexPatternSetRequestPrivate : public WafRequestPrivate {

public:
    UpdateRegexPatternSetRequestPrivate(const WafRequest::Action action,
                                   UpdateRegexPatternSetRequest * const q);
    UpdateRegexPatternSetRequestPrivate(const UpdateRegexPatternSetRequestPrivate &other,
                                   UpdateRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRegexPatternSetRequest)

};

} // namespace Waf
} // namespace QtAws

#endif
