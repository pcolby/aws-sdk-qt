// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMERESOURCERESPONSE_P_H
#define QTAWS_RESUMERESOURCERESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class ResumeResourceResponse;

class ResumeResourceResponsePrivate : public ForecastResponsePrivate {

public:

    explicit ResumeResourceResponsePrivate(ResumeResourceResponse * const q);

    void parseResumeResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ResumeResourceResponse)
    Q_DISABLE_COPY(ResumeResourceResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
