// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAGSREQUEST_P_H
#define QTAWS_DESCRIBETAGSREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describetagsrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeTagsRequest;

class DescribeTagsRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeTagsRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeTagsRequest * const q);
    DescribeTagsRequestPrivate(const DescribeTagsRequestPrivate &other,
                                   DescribeTagsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTagsRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
