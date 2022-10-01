// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEMETRICSCOLLECTIONRESPONSE_H
#define QTAWS_ENABLEMETRICSCOLLECTIONRESPONSE_H

#include "autoscalingresponse.h"
#include "enablemetricscollectionrequest.h"

namespace QtAws {
namespace AutoScaling {

class EnableMetricsCollectionResponsePrivate;

class QTAWSAUTOSCALING_EXPORT EnableMetricsCollectionResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    EnableMetricsCollectionResponse(const EnableMetricsCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableMetricsCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableMetricsCollectionResponse)
    Q_DISABLE_COPY(EnableMetricsCollectionResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
