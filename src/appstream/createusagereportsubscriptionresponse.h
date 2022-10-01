// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSAGEREPORTSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATEUSAGEREPORTSUBSCRIPTIONRESPONSE_H

#include "appstreamresponse.h"
#include "createusagereportsubscriptionrequest.h"

namespace QtAws {
namespace AppStream {

class CreateUsageReportSubscriptionResponsePrivate;

class QTAWSAPPSTREAM_EXPORT CreateUsageReportSubscriptionResponse : public AppStreamResponse {
    Q_OBJECT

public:
    CreateUsageReportSubscriptionResponse(const CreateUsageReportSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateUsageReportSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateUsageReportSubscriptionResponse)
    Q_DISABLE_COPY(CreateUsageReportSubscriptionResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
