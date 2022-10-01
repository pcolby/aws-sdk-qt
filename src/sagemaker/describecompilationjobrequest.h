// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMPILATIONJOBREQUEST_H
#define QTAWS_DESCRIBECOMPILATIONJOBREQUEST_H

#include "sagemakerrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeCompilationJobRequestPrivate;

class QTAWSSAGEMAKER_EXPORT DescribeCompilationJobRequest : public SageMakerRequest {

public:
    DescribeCompilationJobRequest(const DescribeCompilationJobRequest &other);
    DescribeCompilationJobRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCompilationJobRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
