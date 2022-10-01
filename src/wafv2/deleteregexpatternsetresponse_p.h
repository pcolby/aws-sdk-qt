// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREGEXPATTERNSETRESPONSE_P_H
#define QTAWS_DELETEREGEXPATTERNSETRESPONSE_P_H

#include "wafv2response_p.h"

namespace QtAws {
namespace Wafv2 {

class DeleteRegexPatternSetResponse;

class DeleteRegexPatternSetResponsePrivate : public Wafv2ResponsePrivate {

public:

    explicit DeleteRegexPatternSetResponsePrivate(DeleteRegexPatternSetResponse * const q);

    void parseDeleteRegexPatternSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRegexPatternSetResponse)
    Q_DISABLE_COPY(DeleteRegexPatternSetResponsePrivate)

};

} // namespace Wafv2
} // namespace QtAws

#endif
