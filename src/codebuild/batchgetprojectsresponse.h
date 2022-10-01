// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETPROJECTSRESPONSE_H
#define QTAWS_BATCHGETPROJECTSRESPONSE_H

#include "codebuildresponse.h"
#include "batchgetprojectsrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetProjectsResponsePrivate;

class QTAWSCODEBUILD_EXPORT BatchGetProjectsResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    BatchGetProjectsResponse(const BatchGetProjectsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetProjectsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetProjectsResponse)
    Q_DISABLE_COPY(BatchGetProjectsResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
