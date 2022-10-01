// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMETRICSCOLLECTIONRESPONSE_P_H
#define QTAWS_ENABLEMETRICSCOLLECTIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class EnableMetricsCollectionResponse;

class EnableMetricsCollectionResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit EnableMetricsCollectionResponsePrivate(EnableMetricsCollectionResponse * const q);

    void parseEnableMetricsCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableMetricsCollectionResponse)
    Q_DISABLE_COPY(EnableMetricsCollectionResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
