// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBATCHPREDICTIONREQUEST_H
#define QTAWS_GETBATCHPREDICTIONREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class GetBatchPredictionRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT GetBatchPredictionRequest : public MachineLearningRequest {

public:
    GetBatchPredictionRequest(const GetBatchPredictionRequest &other);
    GetBatchPredictionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
