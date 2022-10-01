// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDATASETGROUPRESPONSE_H
#define QTAWS_DELETEDATASETGROUPRESPONSE_H

#include "forecastresponse.h"
#include "deletedatasetgrouprequest.h"

namespace QtAws {
namespace Forecast {

class DeleteDatasetGroupResponsePrivate;

class QTAWSFORECAST_EXPORT DeleteDatasetGroupResponse : public ForecastResponse {
    Q_OBJECT

public:
    DeleteDatasetGroupResponse(const DeleteDatasetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteDatasetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDatasetGroupResponse)
    Q_DISABLE_COPY(DeleteDatasetGroupResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
