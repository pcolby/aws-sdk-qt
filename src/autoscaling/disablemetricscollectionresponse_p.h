// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEMETRICSCOLLECTIONRESPONSE_P_H
#define QTAWS_DISABLEMETRICSCOLLECTIONRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DisableMetricsCollectionResponse;

class DisableMetricsCollectionResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DisableMetricsCollectionResponsePrivate(DisableMetricsCollectionResponse * const q);

    void parseDisableMetricsCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableMetricsCollectionResponse)
    Q_DISABLE_COPY(DisableMetricsCollectionResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
