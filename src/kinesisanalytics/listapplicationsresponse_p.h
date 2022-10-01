// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONSRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONSRESPONSE_P_H

#include "kinesisanalyticsresponse_p.h"

namespace QtAws {
namespace KinesisAnalytics {

class ListApplicationsResponse;

class ListApplicationsResponsePrivate : public KinesisAnalyticsResponsePrivate {

public:

    explicit ListApplicationsResponsePrivate(ListApplicationsResponse * const q);

    void parseListApplicationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationsResponse)
    Q_DISABLE_COPY(ListApplicationsResponsePrivate)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
