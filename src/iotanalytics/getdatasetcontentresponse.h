// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDATASETCONTENTRESPONSE_H
#define QTAWS_GETDATASETCONTENTRESPONSE_H

#include "iotanalyticsresponse.h"
#include "getdatasetcontentrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class GetDatasetContentResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT GetDatasetContentResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    GetDatasetContentResponse(const GetDatasetContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDatasetContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDatasetContentResponse)
    Q_DISABLE_COPY(GetDatasetContentResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
