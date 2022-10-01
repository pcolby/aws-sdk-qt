// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELPACKAGINGJOBRESPONSE_P_H
#define QTAWS_DESCRIBEMODELPACKAGINGJOBRESPONSE_P_H

#include "lookoutvisionresponse_p.h"

namespace QtAws {
namespace LookoutVision {

class DescribeModelPackagingJobResponse;

class DescribeModelPackagingJobResponsePrivate : public LookoutVisionResponsePrivate {

public:

    explicit DescribeModelPackagingJobResponsePrivate(DescribeModelPackagingJobResponse * const q);

    void parseDescribeModelPackagingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeModelPackagingJobResponse)
    Q_DISABLE_COPY(DescribeModelPackagingJobResponsePrivate)

};

} // namespace LookoutVision
} // namespace QtAws

#endif
