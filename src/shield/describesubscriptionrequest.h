// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIPTIONREQUEST_H
#define QTAWS_DESCRIBESUBSCRIPTIONREQUEST_H

#include "shieldrequest.h"

namespace QtAws {
namespace Shield {

class DescribeSubscriptionRequestPrivate;

class QTAWSSHIELD_EXPORT DescribeSubscriptionRequest : public ShieldRequest {

public:
    DescribeSubscriptionRequest(const DescribeSubscriptionRequest &other);
    DescribeSubscriptionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSubscriptionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
