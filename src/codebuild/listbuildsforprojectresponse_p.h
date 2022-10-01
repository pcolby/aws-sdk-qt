// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDSFORPROJECTRESPONSE_P_H
#define QTAWS_LISTBUILDSFORPROJECTRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildsForProjectResponse;

class ListBuildsForProjectResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListBuildsForProjectResponsePrivate(ListBuildsForProjectResponse * const q);

    void parseListBuildsForProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBuildsForProjectResponse)
    Q_DISABLE_COPY(ListBuildsForProjectResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
