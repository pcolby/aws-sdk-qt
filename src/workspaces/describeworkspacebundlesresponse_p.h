// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKSPACEBUNDLESRESPONSE_P_H
#define QTAWS_DESCRIBEWORKSPACEBUNDLESRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeWorkspaceBundlesResponse;

class DescribeWorkspaceBundlesResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeWorkspaceBundlesResponsePrivate(DescribeWorkspaceBundlesResponse * const q);

    void parseDescribeWorkspaceBundlesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeWorkspaceBundlesResponse)
    Q_DISABLE_COPY(DescribeWorkspaceBundlesResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
