// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSAGGREGATIONRESPONSE_H
#define QTAWS_GETBUCKETSAGGREGATIONRESPONSE_H

#include "iotresponse.h"
#include "getbucketsaggregationrequest.h"

namespace QtAws {
namespace IoT {

class GetBucketsAggregationResponsePrivate;

class QTAWSIOT_EXPORT GetBucketsAggregationResponse : public IoTResponse {
    Q_OBJECT

public:
    GetBucketsAggregationResponse(const GetBucketsAggregationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBucketsAggregationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketsAggregationResponse)
    Q_DISABLE_COPY(GetBucketsAggregationResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
