// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBUILDBATCHRESPONSE_H
#define QTAWS_STARTBUILDBATCHRESPONSE_H

#include "codebuildresponse.h"
#include "startbuildbatchrequest.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildBatchResponsePrivate;

class QTAWSCODEBUILD_EXPORT StartBuildBatchResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    StartBuildBatchResponse(const StartBuildBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartBuildBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBuildBatchResponse)
    Q_DISABLE_COPY(StartBuildBatchResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
