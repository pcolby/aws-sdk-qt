// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELABELINGJOBRESPONSE_H
#define QTAWS_CREATELABELINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "createlabelingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateLabelingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateLabelingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateLabelingJobResponse(const CreateLabelingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateLabelingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateLabelingJobResponse)
    Q_DISABLE_COPY(CreateLabelingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
