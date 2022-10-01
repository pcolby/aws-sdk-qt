// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATOROFFERINGSRESPONSE_P_H
#define QTAWS_DESCRIBEACCELERATOROFFERINGSRESPONSE_P_H

#include "elasticinferenceresponse_p.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorOfferingsResponse;

class DescribeAcceleratorOfferingsResponsePrivate : public ElasticInferenceResponsePrivate {

public:

    explicit DescribeAcceleratorOfferingsResponsePrivate(DescribeAcceleratorOfferingsResponse * const q);

    void parseDescribeAcceleratorOfferingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorOfferingsResponse)
    Q_DISABLE_COPY(DescribeAcceleratorOfferingsResponsePrivate)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
