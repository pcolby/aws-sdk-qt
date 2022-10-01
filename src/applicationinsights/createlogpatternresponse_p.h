// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGPATTERNRESPONSE_P_H
#define QTAWS_CREATELOGPATTERNRESPONSE_P_H

#include "applicationinsightsresponse_p.h"

namespace QtAws {
namespace ApplicationInsights {

class CreateLogPatternResponse;

class CreateLogPatternResponsePrivate : public ApplicationInsightsResponsePrivate {

public:

    explicit CreateLogPatternResponsePrivate(CreateLogPatternResponse * const q);

    void parseCreateLogPatternResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLogPatternResponse)
    Q_DISABLE_COPY(CreateLogPatternResponsePrivate)

};

} // namespace ApplicationInsights
} // namespace QtAws

#endif
