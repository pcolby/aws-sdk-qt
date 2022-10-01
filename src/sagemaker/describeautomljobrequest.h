// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOMLJOBREQUEST_H
#define QTAWS_DESCRIBEAUTOMLJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeAutoMLJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeAutoMLJobRequest : public SageMakerRequest {

public:
    DescribeAutoMLJobRequest(const DescribeAutoMLJobRequest &other);
    DescribeAutoMLJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAutoMLJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
