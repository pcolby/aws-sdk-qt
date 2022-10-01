// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAVAILABLERESOURCEMETRICSRESPONSE_H
#define QTAWS_LISTAVAILABLERESOURCEMETRICSRESPONSE_H

#include "piresponse.h"
#include "listavailableresourcemetricsrequest.h"

namespace QtAws {
namespace Pi {

class ListAvailableResourceMetricsResponsePrivate;

class QTAWSPI_EXPORT ListAvailableResourceMetricsResponse : public PiResponse {
    Q_OBJECT

public:
    ListAvailableResourceMetricsResponse(const ListAvailableResourceMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListAvailableResourceMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAvailableResourceMetricsResponse)
    Q_DISABLE_COPY(ListAvailableResourceMetricsResponse)

};

} // namespace Pi
} // namespace QtAws

#endif
