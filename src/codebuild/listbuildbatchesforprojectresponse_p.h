// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTBUILDBATCHESFORPROJECTRESPONSE_P_H
#define QTAWS_LISTBUILDBATCHESFORPROJECTRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListBuildBatchesForProjectResponse;

class ListBuildBatchesForProjectResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListBuildBatchesForProjectResponsePrivate(ListBuildBatchesForProjectResponse * const q);

    void parseListBuildBatchesForProjectResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListBuildBatchesForProjectResponse)
    Q_DISABLE_COPY(ListBuildBatchesForProjectResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
