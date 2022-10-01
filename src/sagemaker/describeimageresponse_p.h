// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGERESPONSE_P_H
#define QTAWS_DESCRIBEIMAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeImageResponse;

class DescribeImageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeImageResponsePrivate(DescribeImageResponse * const q);

    void parseDescribeImageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImageResponse)
    Q_DISABLE_COPY(DescribeImageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
