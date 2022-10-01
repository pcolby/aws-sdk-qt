// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTBUILDRESPONSE_H
#define QTAWS_STARTBUILDRESPONSE_H

#include "codebuildresponse.h"
#include "startbuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class StartBuildResponsePrivate;

class QTAWSCODEBUILD_EXPORT StartBuildResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    StartBuildResponse(const StartBuildRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartBuildRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartBuildResponse)
    Q_DISABLE_COPY(StartBuildResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
