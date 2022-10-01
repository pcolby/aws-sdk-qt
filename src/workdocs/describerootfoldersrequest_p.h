// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEROOTFOLDERSREQUEST_P_H
#define QTAWS_DESCRIBEROOTFOLDERSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describerootfoldersrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeRootFoldersRequest;

class DescribeRootFoldersRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeRootFoldersRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeRootFoldersRequest * const q);
    DescribeRootFoldersRequestPrivate(const DescribeRootFoldersRequestPrivate &other,
                                   DescribeRootFoldersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRootFoldersRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
