// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETESTCASESRESPONSE_P_H
#define QTAWS_DESCRIBETESTCASESRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class DescribeTestCasesResponse;

class DescribeTestCasesResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit DescribeTestCasesResponsePrivate(DescribeTestCasesResponse * const q);

    void parseDescribeTestCasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTestCasesResponse)
    Q_DISABLE_COPY(DescribeTestCasesResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
