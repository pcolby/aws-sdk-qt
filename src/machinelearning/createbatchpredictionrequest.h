// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBATCHPREDICTIONREQUEST_H
#define QTAWS_CREATEBATCHPREDICTIONREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class CreateBatchPredictionRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT CreateBatchPredictionRequest : public MachineLearningRequest {

public:
    CreateBatchPredictionRequest(const CreateBatchPredictionRequest &other);
    CreateBatchPredictionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
