// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDATASETCONTENTRESPONSE_H
#define QTAWS_CREATEDATASETCONTENTRESPONSE_H

#include "iotanalyticsresponse.h"
#include "createdatasetcontentrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class CreateDatasetContentResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT CreateDatasetContentResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    CreateDatasetContentResponse(const CreateDatasetContentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDatasetContentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDatasetContentResponse)
    Q_DISABLE_COPY(CreateDatasetContentResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
