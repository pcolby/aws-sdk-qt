// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEVERSIONRESPONSE_P_H
#define QTAWS_DESCRIBEIMAGEVERSIONRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeImageVersionResponse;

class DescribeImageVersionResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeImageVersionResponsePrivate(DescribeImageVersionResponse * const q);

    void parseDescribeImageVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeImageVersionResponse)
    Q_DISABLE_COPY(DescribeImageVersionResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
