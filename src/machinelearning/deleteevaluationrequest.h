// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVALUATIONREQUEST_H
#define QTAWS_DELETEEVALUATIONREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteEvaluationRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteEvaluationRequest : public MachineLearningRequest {

public:
    DeleteEvaluationRequest(const DeleteEvaluationRequest &other);
    DeleteEvaluationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEvaluationRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
