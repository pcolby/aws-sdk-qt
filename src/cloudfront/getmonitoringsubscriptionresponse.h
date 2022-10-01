// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMONITORINGSUBSCRIPTIONRESPONSE_H
#define QTAWS_GETMONITORINGSUBSCRIPTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "getmonitoringsubscriptionrequest.h"

namespace QtAws {
namespace CloudFront {

class GetMonitoringSubscriptionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT GetMonitoringSubscriptionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    GetMonitoringSubscriptionResponse(const GetMonitoringSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetMonitoringSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMonitoringSubscriptionResponse)
    Q_DISABLE_COPY(GetMonitoringSubscriptionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
