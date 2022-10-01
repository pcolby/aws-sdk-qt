// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RETRYBUILDRESPONSE_H
#define QTAWS_RETRYBUILDRESPONSE_H

#include "codebuildresponse.h"
#include "retrybuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class RetryBuildResponsePrivate;

class QTAWSCODEBUILD_EXPORT RetryBuildResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    RetryBuildResponse(const RetryBuildRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RetryBuildRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RetryBuildResponse)
    Q_DISABLE_COPY(RetryBuildResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
