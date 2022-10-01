// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTRESPONSE_P_H
#define QTAWS_FORECASTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace Forecast {

class ForecastResponse;

class ForecastResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ForecastResponsePrivate(ForecastResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ForecastResponse)
    Q_DISABLE_COPY(ForecastResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
