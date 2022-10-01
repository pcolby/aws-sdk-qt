// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEIMAGEPERMISSIONSRESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACEIMAGEPERMISSIONSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceImagePermissionsResponse;

class DescribeWorkspaceImagePermissionsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeWorkspaceImagePermissionsResponsePrivate(DescribeWorkspaceImagePermissionsResponse * const q);

    void parseDescribeWorkspaceImagePermissionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceImagePermissionsResponse)
    Q_DISABLE_COPY(DescribeWorkspaceImagePermissionsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
