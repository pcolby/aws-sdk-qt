// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECOMMENTSREQUEST_P_H
#define QTAWS_DESCRIBECOMMENTSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describecommentsrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeCommentsRequest;

class DescribeCommentsRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeCommentsRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeCommentsRequest * const q);
    DescribeCommentsRequestPrivate(const DescribeCommentsRequestPrivate &other,
                                   DescribeCommentsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCommentsRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
