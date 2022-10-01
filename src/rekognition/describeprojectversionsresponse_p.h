// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTVERSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEPROJECTVERSIONSRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DescribeProjectVersionsResponse;

class DescribeProjectVersionsResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DescribeProjectVersionsResponsePrivate(DescribeProjectVersionsResponse * const q);

    void parseDescribeProjectVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProjectVersionsResponse)
    Q_DISABLE_COPY(DescribeProjectVersionsResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
