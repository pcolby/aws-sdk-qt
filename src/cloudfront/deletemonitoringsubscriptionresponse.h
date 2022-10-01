// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMONITORINGSUBSCRIPTIONRESPONSE_H
#define QTAWS_DELETEMONITORINGSUBSCRIPTIONRESPONSE_H

#include "cloudfrontresponse.h"
#include "deletemonitoringsubscriptionrequest.h"

namespace QtAws {
namespace CloudFront {

class DeleteMonitoringSubscriptionResponsePrivate;

class QTAWSCLOUDFRONT_EXPORT DeleteMonitoringSubscriptionResponse : public CloudFrontResponse {
    Q_OBJECT

public:
    DeleteMonitoringSubscriptionResponse(const DeleteMonitoringSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteMonitoringSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMonitoringSubscriptionResponse)
    Q_DISABLE_COPY(DeleteMonitoringSubscriptionResponse)

};

} // namespace CloudFront
} // namespace QtAws

#endif
