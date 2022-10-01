// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALGORITHMREQUEST_P_H
#define QTAWS_DESCRIBEALGORITHMREQUEST_P_H

#include "personalizerequest_p.h"
#include "describealgorithmrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeAlgorithmRequest;

class DescribeAlgorithmRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeAlgorithmRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeAlgorithmRequest * const q);
    DescribeAlgorithmRequestPrivate(const DescribeAlgorithmRequestPrivate &other,
                                   DescribeAlgorithmRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlgorithmRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
