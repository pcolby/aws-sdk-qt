// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSAGGREGATIONREQUEST_P_H
#define QTAWS_GETBUCKETSAGGREGATIONREQUEST_P_H

#include "iotrequest_p.h"
#include "getbucketsaggregationrequest.h"

namespace QtAws {
namespace IoT {

class GetBucketsAggregationRequest;

class GetBucketsAggregationRequestPrivate : public IoTRequestPrivate {

public:
    GetBucketsAggregationRequestPrivate(const IoTRequest::Action action,
                                   GetBucketsAggregationRequest * const q);
    GetBucketsAggregationRequestPrivate(const GetBucketsAggregationRequestPrivate &other,
                                   GetBucketsAggregationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBucketsAggregationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
