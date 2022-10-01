// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBRUNREQUEST_P_H
#define QTAWS_DESCRIBEJOBRUNREQUEST_P_H

#include "databrewrequest_p.h"
#include "describejobrunrequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeJobRunRequest;

class DescribeJobRunRequestPrivate : public DataBrewRequestPrivate {

public:
    DescribeJobRunRequestPrivate(const DataBrewRequest::Action action,
                                   DescribeJobRunRequest * const q);
    DescribeJobRunRequestPrivate(const DescribeJobRunRequestPrivate &other,
                                   DescribeJobRunRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobRunRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
