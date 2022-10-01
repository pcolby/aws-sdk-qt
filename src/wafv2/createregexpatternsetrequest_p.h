// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREGEXPATTERNSETREQUEST_P_H
#define QTAWS_CREATEREGEXPATTERNSETREQUEST_P_H

#include "wafv2request_p.h"
#include "createregexpatternsetrequest.h"

namespace QtAws {
namespace Wafv2 {

class CreateRegexPatternSetRequest;

class CreateRegexPatternSetRequestPrivate : public Wafv2RequestPrivate {

public:
    CreateRegexPatternSetRequestPrivate(const Wafv2Request::Action action,
                                   CreateRegexPatternSetRequest * const q);
    CreateRegexPatternSetRequestPrivate(const CreateRegexPatternSetRequestPrivate &other,
                                   CreateRegexPatternSetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRegexPatternSetRequest)

};

} // namespace Wafv2
} // namespace QtAws

#endif
