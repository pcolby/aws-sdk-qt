// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENOTIFICATIONSUBSCRIPTIONRESPONSE_H
#define QTAWS_DELETENOTIFICATIONSUBSCRIPTIONRESPONSE_H

#include "workdocsresponse.h"
#include "deletenotificationsubscriptionrequest.h"

namespace QtAws {
namespace WorkDocs {

class DeleteNotificationSubscriptionResponsePrivate;

class QTAWSWORKDOCS_EXPORT DeleteNotificationSubscriptionResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    DeleteNotificationSubscriptionResponse(const DeleteNotificationSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNotificationSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNotificationSubscriptionResponse)
    Q_DISABLE_COPY(DeleteNotificationSubscriptionResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
