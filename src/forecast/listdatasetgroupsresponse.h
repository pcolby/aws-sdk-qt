// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETGROUPSRESPONSE_H
#define QTAWS_LISTDATASETGROUPSRESPONSE_H

#include "forecastresponse.h"
#include "listdatasetgroupsrequest.h"

namespace QtAws {
namespace Forecast {

class ListDatasetGroupsResponsePrivate;

class QTAWSFORECAST_EXPORT ListDatasetGroupsResponse : public ForecastResponse {
    Q_OBJECT

public:
    ListDatasetGroupsResponse(const ListDatasetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetGroupsResponse)
    Q_DISABLE_COPY(ListDatasetGroupsResponse)

};

} // namespace Forecast
} // namespace QtAws

#endif
