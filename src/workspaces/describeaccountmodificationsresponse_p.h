// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTMODIFICATIONSRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTMODIFICATIONSRESPONSE_P_H

#include "workspacesresponse_p.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeAccountModificationsResponse;

class DescribeAccountModificationsResponsePrivate : public WorkSpacesResponsePrivate {

public:

    explicit DescribeAccountModificationsResponsePrivate(DescribeAccountModificationsResponse * const q);

    void parseDescribeAccountModificationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountModificationsResponse)
    Q_DISABLE_COPY(DescribeAccountModificationsResponsePrivate)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
