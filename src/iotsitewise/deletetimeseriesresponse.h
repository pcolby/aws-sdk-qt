// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETIMESERIESRESPONSE_H
#define QTAWS_DELETETIMESERIESRESPONSE_H

#include "iotsitewiseresponse.h"
#include "deletetimeseriesrequest.h"

namespace QtAws {
namespace IoTSiteWise {

class DeleteTimeSeriesResponsePrivate;

class QTAWSIOTSITEWISE_EXPORT DeleteTimeSeriesResponse : public IoTSiteWiseResponse {
    Q_OBJECT

public:
    DeleteTimeSeriesResponse(const DeleteTimeSeriesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteTimeSeriesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteTimeSeriesResponse)
    Q_DISABLE_COPY(DeleteTimeSeriesResponse)

};

} // namespace IoTSiteWise
} // namespace QtAws

#endif
