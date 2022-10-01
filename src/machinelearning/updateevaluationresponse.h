// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVALUATIONRESPONSE_H
#define QTAWS_UPDATEEVALUATIONRESPONSE_H

#include "machinelearningresponse.h"
#include "updateevaluationrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateEvaluationResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT UpdateEvaluationResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    UpdateEvaluationResponse(const UpdateEvaluationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEvaluationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEvaluationResponse)
    Q_DISABLE_COPY(UpdateEvaluationResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
