// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATESUBSCRIPTIONRESPONSE_H

#include "shieldresponse.h"
#include "createsubscriptionrequest.h"

namespace QtAws {
namespace Shield {

class CreateSubscriptionResponsePrivate;

class QTAWSSHIELD_EXPORT CreateSubscriptionResponse : public ShieldResponse {
    Q_OBJECT

public:
    CreateSubscriptionResponse(const CreateSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubscriptionResponse)
    Q_DISABLE_COPY(CreateSubscriptionResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
