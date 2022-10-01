// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERECOMMENDERREQUEST_P_H
#define QTAWS_DESCRIBERECOMMENDERREQUEST_P_H

#include "personalizerequest_p.h"
#include "describerecommenderrequest.h"

namespace QtAws {
namespace Personalize {

class DescribeRecommenderRequest;

class DescribeRecommenderRequestPrivate : public PersonalizeRequestPrivate {

public:
    DescribeRecommenderRequestPrivate(const PersonalizeRequest::Action action,
                                   DescribeRecommenderRequest * const q);
    DescribeRecommenderRequestPrivate(const DescribeRecommenderRequestPrivate &other,
                                   DescribeRecommenderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRecommenderRequest)

};

} // namespace Personalize
} // namespace QtAws

#endif
