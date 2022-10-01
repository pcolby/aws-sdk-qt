// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONREQUEST_H
#define QTAWS_DELETESUBSCRIPTIONREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DeleteSubscriptionRequestPrivate;

class QTAWSSHIELD_EXPORT DeleteSubscriptionRequest : public ShieldRequest {

public:
    DeleteSubscriptionRequest(const DeleteSubscriptionRequest &other);
    DeleteSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSubscriptionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
