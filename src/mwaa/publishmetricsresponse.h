// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUBLISHMETRICSRESPONSE_H
#define QTAWS_PUBLISHMETRICSRESPONSE_H

#include "mwaaresponse.h"
#include "publishmetricsrequest.h"

namespace QtAws {
namespace Mwaa {

class PublishMetricsResponsePrivate;

class QTAWSMWAA_EXPORT PublishMetricsResponse : public MwaaResponse {
    Q_OBJECT

public:
    PublishMetricsResponse(const PublishMetricsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PublishMetricsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PublishMetricsResponse)
    Q_DISABLE_COPY(PublishMetricsResponse)

};

} // namespace Mwaa
} // namespace QtAws

#endif
