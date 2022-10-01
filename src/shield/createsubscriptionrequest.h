// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBSCRIPTIONREQUEST_H
#define QTAWS_CREATESUBSCRIPTIONREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class CreateSubscriptionRequestPrivate;

class QTAWSSHIELD_EXPORT CreateSubscriptionRequest : public ShieldRequest {

public:
    CreateSubscriptionRequest(const CreateSubscriptionRequest &other);
    CreateSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSubscriptionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
