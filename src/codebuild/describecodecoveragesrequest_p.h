// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODECOVERAGESREQUEST_P_H
#define QTAWS_DESCRIBECODECOVERAGESREQUEST_P_H

#include "codebuildrequest_p.h"
#include "describecodecoveragesrequest.h"

namespace QtAws {
namespace CodeBuild {

class DescribeCodeCoveragesRequest;

class DescribeCodeCoveragesRequestPrivate : public CodeBuildRequestPrivate {

public:
    DescribeCodeCoveragesRequestPrivate(const CodeBuildRequest::Action action,
                                   DescribeCodeCoveragesRequest * const q);
    DescribeCodeCoveragesRequestPrivate(const DescribeCodeCoveragesRequestPrivate &other,
                                   DescribeCodeCoveragesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCodeCoveragesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
