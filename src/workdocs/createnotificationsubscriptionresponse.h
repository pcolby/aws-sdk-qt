// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENOTIFICATIONSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATENOTIFICATIONSUBSCRIPTIONRESPONSE_H

#include "workdocsresponse.h"
#include "createnotificationsubscriptionrequest.h"

namespace QtAws {
namespace WorkDocs {

class CreateNotificationSubscriptionResponsePrivate;

class QTAWSWORKDOCS_EXPORT CreateNotificationSubscriptionResponse : public WorkDocsResponse {
    Q_OBJECT

public:
    CreateNotificationSubscriptionResponse(const CreateNotificationSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNotificationSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNotificationSubscriptionResponse)
    Q_DISABLE_COPY(CreateNotificationSubscriptionResponse)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
