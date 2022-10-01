// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESNAPSHOTSRESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACESNAPSHOTSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceSnapshotsResponse;

class DescribeWorkspaceSnapshotsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeWorkspaceSnapshotsResponsePrivate(DescribeWorkspaceSnapshotsResponse * const q);

    void parseDescribeWorkspaceSnapshotsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceSnapshotsResponse)
    Q_DISABLE_COPY(DescribeWorkspaceSnapshotsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
