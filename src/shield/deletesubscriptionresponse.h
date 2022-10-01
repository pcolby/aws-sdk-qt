// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONRESPONSE_H
#define QTAWS_DELETESUBSCRIPTIONRESPONSE_H

#include "shieldresponse.h"
#include "deletesubscriptionrequest.h"

namespace QtAws {
namespace Shield {

class DeleteSubscriptionResponsePrivate;

class QTAWSSHIELD_EXPORT DeleteSubscriptionResponse : public ShieldResponse {
    Q_OBJECT

public:
    DeleteSubscriptionResponse(const DeleteSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubscriptionResponse)
    Q_DISABLE_COPY(DeleteSubscriptionResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
