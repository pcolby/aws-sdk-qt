// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDESCRIBEMODELPACKAGERESPONSE_P_H
#define QTAWS_BATCHDESCRIBEMODELPACKAGERESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class BatchDescribeModelPackageResponse;

class BatchDescribeModelPackageResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit BatchDescribeModelPackageResponsePrivate(BatchDescribeModelPackageResponse * const q);

    void parseBatchDescribeModelPackageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDescribeModelPackageResponse)
    Q_DISABLE_COPY(BatchDescribeModelPackageResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
