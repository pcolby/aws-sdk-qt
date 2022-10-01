// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETESTCASESREQUEST_P_H
#define QTAWS_DESCRIBETESTCASESREQUEST_P_H

#include "codebuildrequest_p.h"
#include "describetestcasesrequest.h"

namespace QtAws {
namespace CodeBuild {

class DescribeTestCasesRequest;

class DescribeTestCasesRequestPrivate : public CodeBuildRequestPrivate {

public:
    DescribeTestCasesRequestPrivate(const CodeBuildRequest::Action action,
                                   DescribeTestCasesRequest * const q);
    DescribeTestCasesRequestPrivate(const DescribeTestCasesRequestPrivate &other,
                                   DescribeTestCasesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTestCasesRequest)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
