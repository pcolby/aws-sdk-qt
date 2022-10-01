// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESUBSCRIPTIONREQUEST_H
#define QTAWS_UPDATESUBSCRIPTIONREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class UpdateSubscriptionRequestPrivate;

class QTAWSSHIELD_EXPORT UpdateSubscriptionRequest : public ShieldRequest {

public:
    UpdateSubscriptionRequest(const UpdateSubscriptionRequest &other);
    UpdateSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSubscriptionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
