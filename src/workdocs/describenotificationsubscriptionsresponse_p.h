// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENOTIFICATIONSUBSCRIPTIONSRESPONSE_P_H
#define QTAWS_DESCRIBENOTIFICATIONSUBSCRIPTIONSRESPONSE_P_H

#include "workdocsresponse_p.h"

namespace QtAws {
namespace WorkDocs {

class DescribeNotificationSubscriptionsResponse;

class DescribeNotificationSubscriptionsResponsePrivate : public WorkDocsResponsePrivate {

public:

    explicit DescribeNotificationSubscriptionsResponsePrivate(DescribeNotificationSubscriptionsResponse * const q);

    void parseDescribeNotificationSubscriptionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeNotificationSubscriptionsResponse)
    Q_DISABLE_COPY(DescribeNotificationSubscriptionsResponsePrivate)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
