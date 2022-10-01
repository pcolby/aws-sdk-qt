// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETGROUPRESPONSE_P_H
#define QTAWS_DELETEDATASETGROUPRESPONSE_P_H

#include "forecastresponse_p.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetGroupResponse;

class DeleteDatasetGroupResponsePrivate : public ForecastResponsePrivate {

public:

    explicit DeleteDatasetGroupResponsePrivate(DeleteDatasetGroupResponse * const q);

    void parseDeleteDatasetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDatasetGroupResponse)
    Q_DISABLE_COPY(DeleteDatasetGroupResponsePrivate)

};

} // namespace Forecast
} // namespace QtAws

#endif
