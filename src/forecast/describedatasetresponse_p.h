// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASETRESPONSE_P_H
#define QTAWS_DESCRIBEDATASETRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DescribeDatasetResponse;

class DescribeDatasetResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DescribeDatasetResponsePrivate(DescribeDatasetResponse * const q);

    void parseDescribeDatasetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeDatasetResponse)
    Q_DISABLE_COPY(DescribeDatasetResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
