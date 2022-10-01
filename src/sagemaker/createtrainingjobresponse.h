// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETRAININGJOBRESPONSE_H
#define QTAWS_CREATETRAININGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "createtrainingjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateTrainingJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateTrainingJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateTrainingJobResponse(const CreateTrainingJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTrainingJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTrainingJobResponse)
    Q_DISABLE_COPY(CreateTrainingJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
