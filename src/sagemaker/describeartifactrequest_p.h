// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEARTIFACTREQUEST_P_H
#define QTAWS_DESCRIBEARTIFACTREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describeartifactrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeArtifactRequest;

class DescribeArtifactRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeArtifactRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeArtifactRequest * const q);
    DescribeArtifactRequestPrivate(const DescribeArtifactRequestPrivate &other,
                                   DescribeArtifactRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeArtifactRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
