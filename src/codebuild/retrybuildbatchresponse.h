// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYBUILDBATCHRESPONSE_H
#define QTAWS_RETRYBUILDBATCHRESPONSE_H

#include "codebuildresponse.h"
#include "retrybuildbatchrequest.h"

namespace QtAws {
namespace CodeBuild {

class RetryBuildBatchResponsePrivate;

class QTAWSCODEBUILD_EXPORT RetryBuildBatchResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    RetryBuildBatchResponse(const RetryBuildBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetryBuildBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryBuildBatchResponse)
    Q_DISABLE_COPY(RetryBuildBatchResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
