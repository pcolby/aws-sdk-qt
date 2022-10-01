// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETRIALCOMPONENTREQUEST_H
#define QTAWS_DESCRIBETRIALCOMPONENTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeTrialComponentRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeTrialComponentRequest : public SageMakerRequest {

public:
    DescribeTrialComponentRequest(const DescribeTrialComponentRequest &other);
    DescribeTrialComponentRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTrialComponentRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
