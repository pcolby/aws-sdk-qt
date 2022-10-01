// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMODELBIASJOBDEFINITIONREQUEST_P_H
#define QTAWS_DESCRIBEMODELBIASJOBDEFINITIONREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describemodelbiasjobdefinitionrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeModelBiasJobDefinitionRequest;

class DescribeModelBiasJobDefinitionRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeModelBiasJobDefinitionRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeModelBiasJobDefinitionRequest * const q);
    DescribeModelBiasJobDefinitionRequestPrivate(const DescribeModelBiasJobDefinitionRequestPrivate &other,
                                   DescribeModelBiasJobDefinitionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeModelBiasJobDefinitionRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
