// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHYPERPARAMETERTUNINGJOBRESPONSE_H
#define QTAWS_CREATEHYPERPARAMETERTUNINGJOBRESPONSE_H

#include "sagemakerresponse.h"
#include "createhyperparametertuningjobrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateHyperParameterTuningJobResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateHyperParameterTuningJobResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateHyperParameterTuningJobResponse(const CreateHyperParameterTuningJobRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHyperParameterTuningJobRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHyperParameterTuningJobResponse)
    Q_DISABLE_COPY(CreateHyperParameterTuningJobResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
