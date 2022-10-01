// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALERTRESPONSE_H
#define QTAWS_DELETEALERTRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "deletealertrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class DeleteAlertResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT DeleteAlertResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    DeleteAlertResponse(const DeleteAlertRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteAlertRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAlertResponse)
    Q_DISABLE_COPY(DeleteAlertResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
