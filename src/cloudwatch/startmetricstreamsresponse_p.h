// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTMETRICSTREAMSRESPONSE_P_H
#define QTAWS_STARTMETRICSTREAMSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class StartMetricStreamsResponse;

class StartMetricStreamsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit StartMetricStreamsResponsePrivate(StartMetricStreamsResponse * const q);

    void parseStartMetricStreamsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(StartMetricStreamsResponse)
    Q_DISABLE_COPY(StartMetricStreamsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
