// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEMETRICSCOLLECTIONRESPONSE_H
#define QTAWS_DISABLEMETRICSCOLLECTIONRESPONSE_H

#include "autoscalingresponse.h"
#include "disablemetricscollectionrequest.h"

namespace QtAws {
namespace AutoScaling {

class DisableMetricsCollectionResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DisableMetricsCollectionResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DisableMetricsCollectionResponse(const DisableMetricsCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisableMetricsCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisableMetricsCollectionResponse)
    Q_DISABLE_COPY(DisableMetricsCollectionResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
