// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONSTATEREQUEST_H
#define QTAWS_GETSUBSCRIPTIONSTATEREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class GetSubscriptionStateRequestPrivate;

class QTAWSSHIELD_EXPORT GetSubscriptionStateRequest : public ShieldRequest {

public:
    GetSubscriptionStateRequest(const GetSubscriptionStateRequest &other);
    GetSubscriptionStateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionStateRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
