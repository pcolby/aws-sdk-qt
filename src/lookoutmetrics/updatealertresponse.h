// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALERTRESPONSE_H
#define QTAWS_UPDATEALERTRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "updatealertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class UpdateAlertResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT UpdateAlertResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    UpdateAlertResponse(const UpdateAlertRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateAlertRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateAlertResponse)
    Q_DISABLE_COPY(UpdateAlertResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
