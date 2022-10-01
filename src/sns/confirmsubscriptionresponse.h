// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMSUBSCRIPTIONRESPONSE_H
#define QTAWS_CONFIRMSUBSCRIPTIONRESPONSE_H

#include "snsresponse.h"
#include "confirmsubscriptionrequest.h"

namespace QtAws {
namespace Sns {

class ConfirmSubscriptionResponsePrivate;

class QTAWSSNS_EXPORT ConfirmSubscriptionResponse : public SnsResponse {
    Q_OBJECT

public:
    ConfirmSubscriptionResponse(const ConfirmSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmSubscriptionResponse)
    Q_DISABLE_COPY(ConfirmSubscriptionResponse)

};

} // namespace Sns
} // namespace QtAws

#endif
