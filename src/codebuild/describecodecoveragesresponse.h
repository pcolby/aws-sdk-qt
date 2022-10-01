// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECODECOVERAGESRESPONSE_H
#define QTAWS_DESCRIBECODECOVERAGESRESPONSE_H

#include "codebuildresponse.h"
#include "describecodecoveragesrequest.h"

namespace QtAws {
namespace CodeBuild {

class DescribeCodeCoveragesResponsePrivate;

class QTAWSCODEBUILD_EXPORT DescribeCodeCoveragesResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    DescribeCodeCoveragesResponse(const DescribeCodeCoveragesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeCodeCoveragesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeCodeCoveragesResponse)
    Q_DISABLE_COPY(DescribeCodeCoveragesResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
