// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEREGEXPATTERNSETREQUEST_P_H
#define QTAWS_UPDATEREGEXPATTERNSETREQUEST_P_H

#include "wafv2request_p.h"
#include "updateregexpatternsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class UpdateRegexPatternSetRequest;

class UpdateRegexPatternSetRequestPrivate : public Wafv2RequestPrivate {

public:
    UpdateRegexPatternSetRequestPrivate(const Wafv2Request::Action action,
                                   UpdateRegexPatternSetRequest * const q);
    UpdateRegexPatternSetRequestPrivate(const UpdateRegexPatternSetRequestPrivate &other,
                                   UpdateRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateRegexPatternSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
