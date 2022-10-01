// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACTIVITIESREQUEST_P_H
#define QTAWS_DESCRIBEACTIVITIESREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describeactivitiesrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeActivitiesRequest;

class DescribeActivitiesRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeActivitiesRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeActivitiesRequest * const q);
    DescribeActivitiesRequestPrivate(const DescribeActivitiesRequestPrivate &other,
                                   DescribeActivitiesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeActivitiesRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
