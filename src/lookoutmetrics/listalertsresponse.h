// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALERTSRESPONSE_H
#define QTAWS_LISTALERTSRESPONSE_H

#include "lookoutmetricsresponse.h"
#include "listalertsrequest.h"

namespace QtAws {
namespace LookoutMetrics {

class ListAlertsResponsePrivate;

class QTAWSLOOKOUTMETRICS_EXPORT ListAlertsResponse : public LookoutMetricsResponse {
    Q_OBJECT

public:
    ListAlertsResponse(const ListAlertsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAlertsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAlertsResponse)
    Q_DISABLE_COPY(ListAlertsResponse)

};

} // namespace LookoutMetrics
} // namespace QtAws

#endif
