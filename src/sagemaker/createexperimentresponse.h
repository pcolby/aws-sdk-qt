// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPERIMENTRESPONSE_H
#define QTAWS_CREATEEXPERIMENTRESPONSE_H

#include "sagemakerresponse.h"
#include "createexperimentrequest.h"

namespace QtAws {
namespace SageMaker {

class CreateExperimentResponsePrivate;

class QTAWSSAGEMAKER_EXPORT CreateExperimentResponse : public SageMakerResponse {
    Q_OBJECT

public:
    CreateExperimentResponse(const CreateExperimentRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExperimentRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExperimentResponse)
    Q_DISABLE_COPY(CreateExperimentResponse)

};

} // namespace SageMaker
} // namespace QtAws

#endif
