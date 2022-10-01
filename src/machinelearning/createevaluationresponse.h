// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVALUATIONRESPONSE_H
#define QTAWS_CREATEEVALUATIONRESPONSE_H

#include "machinelearningresponse.h"
#include "createevaluationrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateEvaluationResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT CreateEvaluationResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    CreateEvaluationResponse(const CreateEvaluationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEvaluationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEvaluationResponse)
    Q_DISABLE_COPY(CreateEvaluationResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
