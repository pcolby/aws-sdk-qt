// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACESRESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspacesResponse;

class DescribeWorkspacesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeWorkspacesResponsePrivate(DescribeWorkspacesResponse * const q);

    void parseDescribeWorkspacesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspacesResponse)
    Q_DISABLE_COPY(DescribeWorkspacesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
