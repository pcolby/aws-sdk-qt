// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONRESPONSE_H
#define QTAWS_UPDATESUBSCRIPTIONRESPONSE_H

#include "shieldresponse.h"
#include "updatesubscriptionrequest.h"

namespace QtAws {
namespace Shield {

class UpdateSubscriptionResponsePrivate;

class QTAWSSHIELD_EXPORT UpdateSubscriptionResponse : public ShieldResponse {
    Q_OBJECT

public:
    UpdateSubscriptionResponse(const UpdateSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubscriptionResponse)
    Q_DISABLE_COPY(UpdateSubscriptionResponse)

};

} // namespace Shield
} // namespace QtAws

#endif
