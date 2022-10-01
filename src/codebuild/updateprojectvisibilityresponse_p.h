// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPROJECTVISIBILITYRESPONSE_P_H
#define QTAWS_UPDATEPROJECTVISIBILITYRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class UpdateProjectVisibilityResponse;

class UpdateProjectVisibilityResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit UpdateProjectVisibilityResponsePrivate(UpdateProjectVisibilityResponse * const q);

    void parseUpdateProjectVisibilityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateProjectVisibilityResponse)
    Q_DISABLE_COPY(UpdateProjectVisibilityResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
