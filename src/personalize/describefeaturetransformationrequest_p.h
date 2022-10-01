// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFEATURETRANSFORMATIONREQUEST_P_H
#define QTAWS_DESCRIBEFEATURETRANSFORMATIONREQUEST_P_H

#include "personalizerequest_p.h"
#include "describefeaturetransformationrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeFeatureTransformationRequest;

class DescribeFeatureTransformationRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeFeatureTransformationRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeFeatureTransformationRequest * const q);
    DescribeFeatureTransformationRequestPrivate(const DescribeFeatureTransformationRequestPrivate &other,
                                   DescribeFeatureTransformationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFeatureTransformationRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
