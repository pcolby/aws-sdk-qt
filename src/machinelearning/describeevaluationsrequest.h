// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVALUATIONSREQUEST_H
#define QTAWS_DESCRIBEEVALUATIONSREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeEvaluationsRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DescribeEvaluationsRequest : public MachineLearningRequest {

public:
    DescribeEvaluationsRequest(const DescribeEvaluationsRequest &other);
    DescribeEvaluationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEvaluationsRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
