// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMONITORINGSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATEMONITORINGSUBSCRIPTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "createmonitoringsubscriptionrequest.h"

namespace QtAws {
namespace CloudFront {

class CreateMonitoringSubscriptionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT CreateMonitoringSubscriptionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    CreateMonitoringSubscriptionResponse(const CreateMonitoringSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMonitoringSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMonitoringSubscriptionResponse)
    Q_DISABLE_COPY(CreateMonitoringSubscriptionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
