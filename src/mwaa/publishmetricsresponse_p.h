// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHMETRICSRESPONSE_P_H
#define QTAWS_PUBLISHMETRICSRESPONSE_P_H

#include "mwaaresponse_p.h"

namespace QtAws {
namespace Mwaa {

class PublishMetricsResponse;

class PublishMetricsResponsePrivate : public MwaaResponsePrivate {

public:

    explicit PublishMetricsResponsePrivate(PublishMetricsResponse * const q);

    void parsePublishMetricsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PublishMetricsResponse)
    Q_DISABLE_COPY(PublishMetricsResponsePrivate)

};

} // namespace Mwaa
} // namespace QtAws

#endif
