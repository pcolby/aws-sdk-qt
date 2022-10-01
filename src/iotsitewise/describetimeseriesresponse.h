// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETIMESERIESRESPONSE_H
#define QTAWS_DESCRIBETIMESERIESRESPONSE_H

#include "iotsitewiseresponse.h"
#include "describetimeseriesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DescribeTimeSeriesResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DescribeTimeSeriesResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DescribeTimeSeriesResponse(const DescribeTimeSeriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTimeSeriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTimeSeriesResponse)
    Q_DISABLE_COPY(DescribeTimeSeriesResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
