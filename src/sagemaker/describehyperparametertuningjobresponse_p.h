// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHYPERPARAMETERTUNINGJOBRESPONSE_P_H
#define QTAWS_DESCRIBEHYPERPARAMETERTUNINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class DescribeHyperParameterTuningJobResponse;

class DescribeHyperParameterTuningJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit DescribeHyperParameterTuningJobResponsePrivate(DescribeHyperParameterTuningJobResponse * const q);

    void parseDescribeHyperParameterTuningJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeHyperParameterTuningJobResponse)
    Q_DISABLE_COPY(DescribeHyperParameterTuningJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
