// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTAPPLICATIONVERSIONSRESPONSE_P_H

#include "kinesisanalyticsv2response_p.h"

namespace QtAws {
namespace KinesisAnalyticsV2 {

class ListApplicationVersionsResponse;

class ListApplicationVersionsResponsePrivate : public KinesisAnalyticsV2ResponsePrivate {

public:

    explicit ListApplicationVersionsResponsePrivate(ListApplicationVersionsResponse * const q);

    void parseListApplicationVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApplicationVersionsResponse)
    Q_DISABLE_COPY(ListApplicationVersionsResponsePrivate)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
