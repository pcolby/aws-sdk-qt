// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORECASTQUERYRESPONSE_P_H
#define QTAWS_FORECASTQUERYRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace ForecastQuery {

class ForecastQueryResponse;

class ForecastQueryResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit ForecastQueryResponsePrivate(ForecastQueryResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ForecastQueryResponse)
    Q_DISABLE_COPY(ForecastQueryResponsePrivate)

};

} // namespace ForecastQuery
} // namespace QtAws

#endif
