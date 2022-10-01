// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEGROUPSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describegroupsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeGroupsRequest;

class DescribeGroupsRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeGroupsRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeGroupsRequest * const q);
    DescribeGroupsRequestPrivate(const DescribeGroupsRequestPrivate &other,
                                   DescribeGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGroupsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
