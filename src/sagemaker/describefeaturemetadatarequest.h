// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATUREMETADATAREQUEST_H
#define QTAWS_DESCRIBEFEATUREMETADATAREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeFeatureMetadataRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeFeatureMetadataRequest : public SageMakerRequest {

public:
    DescribeFeatureMetadataRequest(const DescribeFeatureMetadataRequest &other);
    DescribeFeatureMetadataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFeatureMetadataRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
