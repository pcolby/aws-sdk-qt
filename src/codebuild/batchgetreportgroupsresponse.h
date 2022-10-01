// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETREPORTGROUPSRESPONSE_H
#define QTAWS_BATCHGETREPORTGROUPSRESPONSE_H

#include "codebuildresponse.h"
#include "batchgetreportgroupsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetReportGroupsResponsePrivate;

class QTAWSCODEBUILD_EXPORT BatchGetReportGroupsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    BatchGetReportGroupsResponse(const BatchGetReportGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetReportGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetReportGroupsResponse)
    Q_DISABLE_COPY(BatchGetReportGroupsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
