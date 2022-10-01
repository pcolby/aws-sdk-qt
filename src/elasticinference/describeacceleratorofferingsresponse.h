// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATOROFFERINGSRESPONSE_H
#define QTAWS_DESCRIBEACCELERATOROFFERINGSRESPONSE_H

#include "elasticinferenceresponse.h"
#include "describeacceleratorofferingsrequest.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorOfferingsResponsePrivate;

class QTAWSELASTICINFERENCE_EXPORT DescribeAcceleratorOfferingsResponse : public ElasticInferenceResponse {
    Q_OBJECT

public:
    DescribeAcceleratorOfferingsResponse(const DescribeAcceleratorOfferingsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeAcceleratorOfferingsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAcceleratorOfferingsResponse)
    Q_DISABLE_COPY(DescribeAcceleratorOfferingsResponse)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
