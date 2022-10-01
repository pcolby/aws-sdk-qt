// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTSRESPONSE_P_H
#define QTAWS_DESCRIBEPROJECTSRESPONSE_P_H

#include "rekognitionresponse_p.h"

namespace QtAws {
namespace Rekognition {

class DescribeProjectsResponse;

class DescribeProjectsResponsePrivate : public RekognitionResponsePrivate {

public:

    explicit DescribeProjectsResponsePrivate(DescribeProjectsResponse * const q);

    void parseDescribeProjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeProjectsResponse)
    Q_DISABLE_COPY(DescribeProjectsResponsePrivate)

};

} // namespace Rekognition
} // namespace QtAws

#endif
