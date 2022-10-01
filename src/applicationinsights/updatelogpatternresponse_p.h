// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGPATTERNRESPONSE_P_H
#define QTAWS_UPDATELOGPATTERNRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class UpdateLogPatternResponse;

class UpdateLogPatternResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit UpdateLogPatternResponsePrivate(UpdateLogPatternResponse * const q);

    void parseUpdateLogPatternResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLogPatternResponse)
    Q_DISABLE_COPY(UpdateLogPatternResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
