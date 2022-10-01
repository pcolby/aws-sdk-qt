// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEVALUATIONREQUEST_H
#define QTAWS_GETEVALUATIONREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetEvaluationRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT GetEvaluationRequest : public MachineLearningRequest {

public:
    GetEvaluationRequest(const GetEvaluationRequest &other);
    GetEvaluationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetEvaluationRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
