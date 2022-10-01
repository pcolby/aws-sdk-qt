// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBREQUEST_P_H
#define QTAWS_DESCRIBEJOBREQUEST_P_H

#include "databrewrequest_p.h"
#include "describejobrequest.h"

namespace QtAws {
namespace DataBrew {

class DescribeJobRequest;

class DescribeJobRequestPrivate : public DataBrewRequestPrivate {

public:
    DescribeJobRequestPrivate(const DataBrewRequest::Action action,
                                   DescribeJobRequest * const q);
    DescribeJobRequestPrivate(const DescribeJobRequestPrivate &other,
                                   DescribeJobRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobRequest)

};

} // namespace DataBrew
} // namespace QtAws

#endif
