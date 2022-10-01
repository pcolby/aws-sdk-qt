// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEIMAGESRESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACEIMAGESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceImagesResponse;

class DescribeWorkspaceImagesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeWorkspaceImagesResponsePrivate(DescribeWorkspaceImagesResponse * const q);

    void parseDescribeWorkspaceImagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceImagesResponse)
    Q_DISABLE_COPY(DescribeWorkspaceImagesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
