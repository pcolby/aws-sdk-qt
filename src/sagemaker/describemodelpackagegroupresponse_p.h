// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGEGROUPRESPONSE_P_H
#define QTAWS_DESCRIBEMODELPACKAGEGROUPRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelPackageGroupResponse;

class DescribeModelPackageGroupResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeModelPackageGroupResponsePrivate(DescribeModelPackageGroupResponse * const q);

    void parseDescribeModelPackageGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelPackageGroupResponse)
    Q_DISABLE_COPY(DescribeModelPackageGroupResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
