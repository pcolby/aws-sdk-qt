// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMETRICSTREAMSRESPONSE_P_H
#define QTAWS_LISTMETRICSTREAMSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class ListMetricStreamsResponse;

class ListMetricStreamsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit ListMetricStreamsResponsePrivate(ListMetricStreamsResponse * const q);

    void parseListMetricStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMetricStreamsResponse)
    Q_DISABLE_COPY(ListMetricStreamsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
