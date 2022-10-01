// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVALUATIONRESPONSE_H
#define QTAWS_DELETEEVALUATIONRESPONSE_H

#include "machinelearningresponse.h"
#include "deleteevaluationrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteEvaluationResponsePrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteEvaluationResponse : public MachineLearningResponse {
    Q_OBJECT

public:
    DeleteEvaluationResponse(const DeleteEvaluationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEvaluationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEvaluationResponse)
    Q_DISABLE_COPY(DeleteEvaluationResponse)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
