// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALERTRESPONSE_P_H
#define QTAWS_CREATEALERTRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class CreateAlertResponse;

class CreateAlertResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit CreateAlertResponsePrivate(CreateAlertResponse * const q);

    void parseCreateAlertResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAlertResponse)
    Q_DISABLE_COPY(CreateAlertResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
