// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBATCHPREDICTIONREQUEST_H
#define QTAWS_DELETEBATCHPREDICTIONREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DeleteBatchPredictionRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DeleteBatchPredictionRequest : public MachineLearningRequest {

public:
    DeleteBatchPredictionRequest(const DeleteBatchPredictionRequest &other);
    DeleteBatchPredictionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBatchPredictionRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
