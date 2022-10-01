// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODEREVIEWREQUEST_P_H
#define QTAWS_DESCRIBECODEREVIEWREQUEST_P_H

#include "codegurureviewerrequest_p.h"
#include "describecodereviewrequest.h"

namespace QtAws {
namespace CodeGuruReviewer {

class DescribeCodeReviewRequest;

class DescribeCodeReviewRequestPrivate : public CodeGuruReviewerRequestPrivate {

public:
    DescribeCodeReviewRequestPrivate(const CodeGuruReviewerRequest::Action action,
                                   DescribeCodeReviewRequest * const q);
    DescribeCodeReviewRequestPrivate(const DescribeCodeReviewRequestPrivate &other,
                                   DescribeCodeReviewRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCodeReviewRequest)

};

} // namespace CodeGuruReviewer
} // namespace QtAws

#endif
