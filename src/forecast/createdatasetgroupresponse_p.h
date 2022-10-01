// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETGROUPRESPONSE_P_H
#define QTAWS_CREATEDATASETGROUPRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class CreateDatasetGroupResponse;

class CreateDatasetGroupResponsePrivate : public ForecastResponsePrivate {

public:

    explicit CreateDatasetGroupResponsePrivate(CreateDatasetGroupResponse * const q);

    void parseCreateDatasetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDatasetGroupResponse)
    Q_DISABLE_COPY(CreateDatasetGroupResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
