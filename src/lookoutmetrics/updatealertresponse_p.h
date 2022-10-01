// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALERTRESPONSE_P_H
#define QTAWS_UPDATEALERTRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAlertResponse;

class UpdateAlertResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit UpdateAlertResponsePrivate(UpdateAlertResponse * const q);

    void parseUpdateAlertResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAlertResponse)
    Q_DISABLE_COPY(UpdateAlertResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
