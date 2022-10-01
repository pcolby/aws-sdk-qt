// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGERESPONSE_P_H
#define QTAWS_DESCRIBEMODELPACKAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelPackageResponse;

class DescribeModelPackageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeModelPackageResponsePrivate(DescribeModelPackageResponse * const q);

    void parseDescribeModelPackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelPackageResponse)
    Q_DISABLE_COPY(DescribeModelPackageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
