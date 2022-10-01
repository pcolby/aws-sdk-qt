// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELABELINGJOBRESPONSE_P_H
#define QTAWS_DESCRIBELABELINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeLabelingJobResponse;

class DescribeLabelingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeLabelingJobResponsePrivate(DescribeLabelingJobResponse * const q);

    void parseDescribeLabelingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLabelingJobResponse)
    Q_DISABLE_COPY(DescribeLabelingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
