// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECONNECTCLIENTADDINSRESPONSE_P_H
#define QTAWS_DESCRIBECONNECTCLIENTADDINSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeConnectClientAddInsResponse;

class DescribeConnectClientAddInsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeConnectClientAddInsResponsePrivate(DescribeConnectClientAddInsResponse * const q);

    void parseDescribeConnectClientAddInsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeConnectClientAddInsResponse)
    Q_DISABLE_COPY(DescribeConnectClientAddInsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
