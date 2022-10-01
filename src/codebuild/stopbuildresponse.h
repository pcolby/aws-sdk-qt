// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPBUILDRESPONSE_H
#define QTAWS_STOPBUILDRESPONSE_H

#include "codebuildresponse.h"
#include "stopbuildrequest.h"

namespace QtAws {
namespace CodeBuild {

class StopBuildResponsePrivate;

class QTAWSCODEBUILD_EXPORT StopBuildResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    StopBuildResponse(const StopBuildRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopBuildRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopBuildResponse)
    Q_DISABLE_COPY(StopBuildResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
