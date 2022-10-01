// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDATASETCONTENTSRESPONSE_H
#define QTAWS_LISTDATASETCONTENTSRESPONSE_H

#include "iotanalyticsresponse.h"
#include "listdatasetcontentsrequest.h"

namespace QtAws {
namespace IoTAnalytics {

class ListDatasetContentsResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT ListDatasetContentsResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    ListDatasetContentsResponse(const ListDatasetContentsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListDatasetContentsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListDatasetContentsResponse)
    Q_DISABLE_COPY(ListDatasetContentsResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
