// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMLMODELSREQUEST_H
#define QTAWS_DESCRIBEMLMODELSREQUEST_H

#include "machinelearningrequest.h"

namespace QtAws {
namespace MachineLearning {

class DescribeMLModelsRequestPrivate;

class QTAWSMACHINELEARNING_EXPORT DescribeMLModelsRequest : public MachineLearningRequest {

public:
    DescribeMLModelsRequest(const DescribeMLModelsRequest &other);
    DescribeMLModelsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMLModelsRequest)

};

} // namespace MachineLearning
} // namespace QtAws

#endif
