// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATASTORERESPONSE_H
#define QTAWS_DESCRIBEDATASTORERESPONSE_H

#include "iotanalyticsresponse.h"
#include "describedatastorerequest.h"

namespace QtAws {
namespace IoTAnalytics {

class DescribeDatastoreResponsePrivate;

class QTAWSIOTANALYTICS_EXPORT DescribeDatastoreResponse : public IoTAnalyticsResponse {
    Q_OBJECT

public:
    DescribeDatastoreResponse(const DescribeDatastoreRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeDatastoreRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDatastoreResponse)
    Q_DISABLE_COPY(DescribeDatastoreResponse)

};

} // namespace IoTAnalytics
} // namespace QtAws

#endif
