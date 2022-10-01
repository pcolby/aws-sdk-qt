// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGPATTERNSETSRESPONSE_P_H
#define QTAWS_LISTLOGPATTERNSETSRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class ListLogPatternSetsResponse;

class ListLogPatternSetsResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit ListLogPatternSetsResponsePrivate(ListLogPatternSetsResponse * const q);

    void parseListLogPatternSetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLogPatternSetsResponse)
    Q_DISABLE_COPY(ListLogPatternSetsResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
