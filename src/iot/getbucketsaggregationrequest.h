// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBUCKETSAGGREGATIONREQUEST_H
#define QTAWS_GETBUCKETSAGGREGATIONREQUEST_H

#include "iotrequest.h"

namespace QtAws {
namespace IoT {

class GetBucketsAggregationRequestPrivate;

class QTAWSIOT_EXPORT GetBucketsAggregationRequest : public IoTRequest {

public:
    GetBucketsAggregationRequest(const GetBucketsAggregationRequest &other);
    GetBucketsAggregationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBucketsAggregationRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
