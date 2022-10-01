// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPROJECTREQUEST_P_H
#define QTAWS_DESCRIBEPROJECTREQUEST_P_H

#include "codestarrequest_p.h"
#include "describeprojectrequest.h"

namespace QtAws {
namespace CodeStar {

class DescribeProjectRequest;

class DescribeProjectRequestPrivate : public CodeStarRequestPrivate {

public:
    DescribeProjectRequestPrivate(const CodeStarRequest::Action action,
                                   DescribeProjectRequest * const q);
    DescribeProjectRequestPrivate(const DescribeProjectRequestPrivate &other,
                                   DescribeProjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeProjectRequest)

};

} // namespace CodeStar
} // namespace QtAws

#endif
