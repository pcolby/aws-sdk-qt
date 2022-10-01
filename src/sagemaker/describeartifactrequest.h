// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARTIFACTREQUEST_H
#define QTAWS_DESCRIBEARTIFACTREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeArtifactRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeArtifactRequest : public SageMakerRequest {

public:
    DescribeArtifactRequest(const DescribeArtifactRequest &other);
    DescribeArtifactRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeArtifactRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
