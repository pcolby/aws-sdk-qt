// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESCONNECTIONSTATUSRESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACESCONNECTIONSTATUSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspacesConnectionStatusResponse;

class DescribeWorkspacesConnectionStatusResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeWorkspacesConnectionStatusResponsePrivate(DescribeWorkspacesConnectionStatusResponse * const q);

    void parseDescribeWorkspacesConnectionStatusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspacesConnectionStatusResponse)
    Q_DISABLE_COPY(DescribeWorkspacesConnectionStatusResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
