// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBATCHPREDICTIONSREQUEST_H
#define QTAWS_DESCRIBEBATCHPREDICTIONSREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeBatchPredictionsRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DescribeBatchPredictionsRequest : public MachineLearningRequest {

public:
    DescribeBatchPredictionsRequest(const DescribeBatchPredictionsRequest &other);
    DescribeBatchPredictionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeBatchPredictionsRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
