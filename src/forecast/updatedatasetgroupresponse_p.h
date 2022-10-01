// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETGROUPRESPONSE_P_H
#define QTAWS_UPDATEDATASETGROUPRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class UpdateDatasetGroupResponse;

class UpdateDatasetGroupResponsePrivate : public ForecastResponsePrivate {

public:

    explicit UpdateDatasetGroupResponsePrivate(UpdateDatasetGroupResponse * const q);

    void parseUpdateDatasetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateDatasetGroupResponse)
    Q_DISABLE_COPY(UpdateDatasetGroupResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
