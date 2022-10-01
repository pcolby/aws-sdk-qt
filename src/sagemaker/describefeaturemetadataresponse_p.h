// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATUREMETADATARESPONSE_P_H
#define QTAWS_DESCRIBEFEATUREMETADATARESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeFeatureMetadataResponse;

class DescribeFeatureMetadataResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeFeatureMetadataResponsePrivate(DescribeFeatureMetadataResponse * const q);

    void parseDescribeFeatureMetadataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeFeatureMetadataResponse)
    Q_DISABLE_COPY(DescribeFeatureMetadataResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
