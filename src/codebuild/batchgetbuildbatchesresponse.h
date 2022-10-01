// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETBUILDBATCHESRESPONSE_H
#define QTAWS_BATCHGETBUILDBATCHESRESPONSE_H

#include "codebuildresponse.h"
#include "batchgetbuildbatchesrequest.h"

namespace QtAws {
namespace CodeBuild {

class BatchGetBuildBatchesResponsePrivate;

class QTAWSCODEBUILD_EXPORT BatchGetBuildBatchesResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    BatchGetBuildBatchesResponse(const BatchGetBuildBatchesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const BatchGetBuildBatchesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetBuildBatchesResponse)
    Q_DISABLE_COPY(BatchGetBuildBatchesResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
