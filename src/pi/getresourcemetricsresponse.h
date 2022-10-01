// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEMETRICSRESPONSE_H
#define QTAWS_GETRESOURCEMETRICSRESPONSE_H

#include "piresponse.h"
#include "getresourcemetricsrequest.h"

namespace QtAws {
namespace Pi {

class GetResourceMetricsResponsePrivate;

class QTAWSPI_EXPORT GetResourceMetricsResponse : public PiResponse {
    Q_OBJECT

public:
    GetResourceMetricsResponse(const GetResourceMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetResourceMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetResourceMetricsResponse)
    Q_DISABLE_COPY(GetResourceMetricsResponse)

};

} // namespace Pi
} // namespace QtAws

#endif
