// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSAGGREGATIONRESPONSE_P_H
#define QTAWS_GETBUCKETSAGGREGATIONRESPONSE_P_H

#include "iotresponse_p.h"

namespace QtAws {
namespace IoT {

class GetBucketsAggregationResponse;

class GetBucketsAggregationResponsePrivate : public IoTResponsePrivate {

public:

    explicit GetBucketsAggregationResponsePrivate(GetBucketsAggregationResponse * const q);

    void parseGetBucketsAggregationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetBucketsAggregationResponse)
    Q_DISABLE_COPY(GetBucketsAggregationResponsePrivate)

};

} // namespace IoT
} // namespace QtAws

#endif
