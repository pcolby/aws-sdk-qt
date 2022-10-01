// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTVISIBILITYRESPONSE_H
#define QTAWS_UPDATEPROJECTVISIBILITYRESPONSE_H

#include "codebuildresponse.h"
#include "updateprojectvisibilityrequest.h"

namespace QtAws {
namespace CodeBuild {

class UpdateProjectVisibilityResponsePrivate;

class QTAWSCODEBUILD_EXPORT UpdateProjectVisibilityResponse : public CodeBuildResponse {
    Q_OBJECT

public:
    UpdateProjectVisibilityResponse(const UpdateProjectVisibilityRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateProjectVisibilityRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateProjectVisibilityResponse)
    Q_DISABLE_COPY(UpdateProjectVisibilityResponse)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
