// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEHUMANTASKUIREQUEST_P_H
#define QTAWS_DESCRIBEHUMANTASKUIREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describehumantaskuirequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeHumanTaskUiRequest;

class DescribeHumanTaskUiRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeHumanTaskUiRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeHumanTaskUiRequest * const q);
    DescribeHumanTaskUiRequestPrivate(const DescribeHumanTaskUiRequestPrivate &other,
                                   DescribeHumanTaskUiRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeHumanTaskUiRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
