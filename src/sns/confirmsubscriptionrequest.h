// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMSUBSCRIPTIONREQUEST_H
#define QTAWS_CONFIRMSUBSCRIPTIONREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class ConfirmSubscriptionRequestPrivate;

class QTAWSSNS_EXPORT ConfirmSubscriptionRequest : public SnsRequest {

public:
    ConfirmSubscriptionRequest(const ConfirmSubscriptionRequest &other);
    ConfirmSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmSubscriptionRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
