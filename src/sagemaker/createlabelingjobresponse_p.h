// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELINGJOBRESPONSE_P_H
#define QTAWS_CREATELABELINGJOBRESPONSE_P_H

#include "sagemakerresponse_p.h"

namespace QtAws {
namespace SageMaker {

class CreateLabelingJobResponse;

class CreateLabelingJobResponsePrivate : public SageMakerResponsePrivate {

public:

    explicit CreateLabelingJobResponsePrivate(CreateLabelingJobResponse * const q);

    void parseCreateLabelingJobResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLabelingJobResponse)
    Q_DISABLE_COPY(CreateLabelingJobResponsePrivate)

};

} // namespace SageMaker
} // namespace QtAws

#endif
