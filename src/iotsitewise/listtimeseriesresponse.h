// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTIMESERIESRESPONSE_H
#define QTAWS_LISTTIMESERIESRESPONSE_H

#include "iotsitewiseresponse.h"
#include "listtimeseriesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class ListTimeSeriesResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT ListTimeSeriesResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    ListTimeSeriesResponse(const ListTimeSeriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTimeSeriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTimeSeriesResponse)
    Q_DISABLE_COPY(ListTimeSeriesResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
