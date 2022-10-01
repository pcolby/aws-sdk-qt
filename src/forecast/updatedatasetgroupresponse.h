// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDATASETGROUPRESPONSE_H
#define QTAWS_UPDATEDATASETGROUPRESPONSE_H

#include "forecastresponse.h"
#include "updatedatasetgrouprequest.h"

namespace QtAws {
namespace Forecast {

class UpdateDatasetGroupResponsePrivate;

class QTAWSFORECAST_EXPORT UpdateDatasetGroupResponse : public ForecastResponse {
    Q_OBJECT

public:
    UpdateDatasetGroupResponse(const UpdateDatasetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDatasetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDatasetGroupResponse)
    Q_DISABLE_COPY(UpdateDatasetGroupResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
