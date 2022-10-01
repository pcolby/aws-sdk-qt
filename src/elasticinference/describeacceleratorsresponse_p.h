// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCELERATORSRESPONSE_P_H
#define QTAWS_DESCRIBEACCELERATORSRESPONSE_P_H

#include "elasticinferenceresponse_p.h"

namespace QtAws {
namespace ElasticInference {

class DescribeAcceleratorsResponse;

class DescribeAcceleratorsResponsePrivate : public ElasticInferenceResponsePrivate {

public:

    explicit DescribeAcceleratorsResponsePrivate(DescribeAcceleratorsResponse * const q);

    void parseDescribeAcceleratorsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAcceleratorsResponse)
    Q_DISABLE_COPY(DescribeAcceleratorsResponsePrivate)

};

} // namespace ElasticInference
} // namespace QtAws

#endif
