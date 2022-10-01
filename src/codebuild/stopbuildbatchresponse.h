// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBUILDBATCHRESPONSE_H
#define QTAWS_STOPBUILDBATCHRESPONSE_H

#include "codebuildresponse.h"
#include "stopbuildbatchrequest.h"

namespace QtAws {
namespace CodeBuild {

class StopBuildBatchResponsePrivate;

class QTAWSCODEBUILD_EXPORT StopBuildBatchResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    StopBuildBatchResponse(const StopBuildBatchRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopBuildBatchRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBuildBatchResponse)
    Q_DISABLE_COPY(StopBuildBatchResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
