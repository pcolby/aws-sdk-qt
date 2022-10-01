// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBATCHPREDICTIONREQUEST_H
#define QTAWS_UPDATEBATCHPREDICTIONREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class UpdateBatchPredictionRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT UpdateBatchPredictionRequest : public MachineLearningRequest {

public:
    UpdateBatchPredictionRequest(const UpdateBatchPredictionRequest &other);
    UpdateBatchPredictionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
