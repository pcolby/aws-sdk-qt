// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPERIENCEREQUEST_P_H
#define QTAWS_DESCRIBEEXPERIENCEREQUEST_P_H

#include "kendrarequest_p.h"
#include "describeexperiencerequest.h"

namespace QtAws {
namespace Kendra {

class DescribeExperienceRequest;

class DescribeExperienceRequestPrivate : public KendraRequestPrivate {

public:
    DescribeExperienceRequestPrivate(const KendraRequest::Action action,
                                   DescribeExperienceRequest * const q);
    DescribeExperienceRequestPrivate(const DescribeExperienceRequestPrivate &other,
                                   DescribeExperienceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExperienceRequest)

};

} // namespace Kendra
} // namespace QtAws

#endif
