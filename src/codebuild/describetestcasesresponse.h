// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETESTCASESRESPONSE_H
#define QTAWS_DESCRIBETESTCASESRESPONSE_H

#include "codebuildresponse.h"
#include "describetestcasesrequest.h"

namespace QtAws {
namespace CodeBuild {

class DescribeTestCasesResponsePrivate;

class QTAWSCODEBUILD_EXPORT DescribeTestCasesResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    DescribeTestCasesResponse(const DescribeTestCasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeTestCasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeTestCasesResponse)
    Q_DISABLE_COPY(DescribeTestCasesResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
