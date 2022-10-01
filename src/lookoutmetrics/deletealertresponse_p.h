// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALERTRESPONSE_P_H
#define QTAWS_DELETEALERTRESPONSE_P_H

#include "lookoutmetricsresponse_p.h"

namespace QtAws {
namespace LookoutMetrics {

class DeleteAlertResponse;

class DeleteAlertResponsePrivate : public LookoutMetricsResponsePrivate {

public:

    explicit DeleteAlertResponsePrivate(DeleteAlertResponse * const q);

    void parseDeleteAlertResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAlertResponse)
    Q_DISABLE_COPY(DeleteAlertResponsePrivate)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
