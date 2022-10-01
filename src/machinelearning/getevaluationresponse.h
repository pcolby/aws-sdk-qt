// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVALUATIONRESPONSE_H
#define QTAWS_GETEVALUATIONRESPONSE_H

#include "machinelearningresponse.h"
#include "getevaluationrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetEvaluationResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT GetEvaluationResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    GetEvaluationResponse(const GetEvaluationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetEvaluationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvaluationResponse)
    Q_DISABLE_COPY(GetEvaluationResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
