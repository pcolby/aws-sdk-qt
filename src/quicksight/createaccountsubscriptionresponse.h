// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEACCOUNTSUBSCRIPTIONRESPONSE_H
#define QTAWS_CREATEACCOUNTSUBSCRIPTIONRESPONSE_H

#include "quicksightresponse.h"
#include "createaccountsubscriptionrequest.h"

namespace QtAws {
namespace QuickSight {

class CreateAccountSubscriptionResponsePrivate;

class QTAWSQUICKSIGHT_EXPORT CreateAccountSubscriptionResponse : public QuickSightResponse {
    Q_OBJECT

public:
    CreateAccountSubscriptionResponse(const CreateAccountSubscriptionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateAccountSubscriptionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAccountSubscriptionResponse)
    Q_DISABLE_COPY(CreateAccountSubscriptionResponse)

};

} // namespace QuickSight
} // namespace QtAws

#endif
