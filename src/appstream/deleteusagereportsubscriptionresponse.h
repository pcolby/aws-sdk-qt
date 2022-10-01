// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSAGEREPORTSUBSCRIPTIONRESPONSE_H
#define QTAWS_DELETEUSAGEREPORTSUBSCRIPTIONRESPONSE_H

#include "appstreamresponse.h"
#include "deleteusagereportsubscriptionrequest.h"

namespace QtAws {
namespace AppStream {

class DeleteUsageReportSubscriptionResponsePrivate;

class QTAWSAPPSTREAM_EXPORT DeleteUsageReportSubscriptionResponse : public AppStreamResponse {
    Q_OBJECT

public:
    DeleteUsageReportSubscriptionResponse(const DeleteUsageReportSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteUsageReportSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUsageReportSubscriptionResponse)
    Q_DISABLE_COPY(DeleteUsageReportSubscriptionResponse)

};

} // namespace AppStream
} // namespace QtAws

#endif
