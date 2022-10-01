// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATUREGROUPREQUEST_H
#define QTAWS_DESCRIBEFEATUREGROUPREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFeatureGroupRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeFeatureGroupRequest : public SageMakerRequest {

public:
    DescribeFeatureGroupRequest(const DescribeFeatureGroupRequest &other);
    DescribeFeatureGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFeatureGroupRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
