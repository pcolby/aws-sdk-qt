// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVALUATIONREQUEST_H
#define QTAWS_UPDATEEVALUATIONREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateEvaluationRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT UpdateEvaluationRequest : public MachineLearningRequest {

public:
    UpdateEvaluationRequest(const UpdateEvaluationRequest &other);
    UpdateEvaluationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEvaluationRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
