// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORTYPESRESPONSE_P_H
#define QTAWS_DESCRIBEACCELERATORTYPESRESPONSE_P_H

#include "elasticinferenceresponse_p.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorTypesResponse;

class DescribeAcceleratorTypesResponsePrivate : public ElasticInferenceResponsePrivate {

public:

    explicit DescribeAcceleratorTypesResponsePrivate(DescribeAcceleratorTypesResponse * const q);

    void parseDescribeAcceleratorTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorTypesResponse)
    Q_DISABLE_COPY(DescribeAcceleratorTypesResponsePrivate)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
