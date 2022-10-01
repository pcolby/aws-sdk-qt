// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSHAREDPROJECTSRESPONSE_P_H
#define QTAWS_LISTSHAREDPROJECTSRESPONSE_P_H

#include "codebuildresponse_p.h"

namespace QtAws {
namespace CodeBuild {

class ListSharedProjectsResponse;

class ListSharedProjectsResponsePrivate : public CodeBuildResponsePrivate {

public:

    explicit ListSharedProjectsResponsePrivate(ListSharedProjectsResponse * const q);

    void parseListSharedProjectsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSharedProjectsResponse)
    Q_DISABLE_COPY(ListSharedProjectsResponsePrivate)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
