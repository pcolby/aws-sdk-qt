// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEDIRECTORIESRESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACEDIRECTORIESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceDirectoriesResponse;

class DescribeWorkspaceDirectoriesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeWorkspaceDirectoriesResponsePrivate(DescribeWorkspaceDirectoriesResponse * const q);

    void parseDescribeWorkspaceDirectoriesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceDirectoriesResponse)
    Q_DISABLE_COPY(DescribeWorkspaceDirectoriesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
