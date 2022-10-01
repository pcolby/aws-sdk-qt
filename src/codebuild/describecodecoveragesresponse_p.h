// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODECOVERAGESRESPONSE_P_H
#define QTAWS_DESCRIBECODECOVERAGESRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class DescribeCodeCoveragesResponse;

class DescribeCodeCoveragesResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit DescribeCodeCoveragesResponsePrivate(DescribeCodeCoveragesResponse * const q);

    void parseDescribeCodeCoveragesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeCodeCoveragesResponse)
    Q_DISABLE_COPY(DescribeCodeCoveragesResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
