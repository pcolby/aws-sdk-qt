// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXPATTERNSETRESPONSE_P_H
#define QTAWS_DELETEREGEXPATTERNSETRESPONSE_P_H

#include "wafresponse_p.h"

namespace QtAws {
namespace Waf {

class DeleteRegexPatternSetResponse;

class DeleteRegexPatternSetResponsePrivate : public WafResponsePrivate {

public:

    explicit DeleteRegexPatternSetResponsePrivate(DeleteRegexPatternSetResponse * const q);

    void parseDeleteRegexPatternSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRegexPatternSetResponse)
    Q_DISABLE_COPY(DeleteRegexPatternSetResponsePrivate)

};

} // namespace Waf
} // namespace QtAws

#endif
