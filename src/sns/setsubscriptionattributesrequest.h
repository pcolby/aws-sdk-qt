// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETSUBSCRIPTIONATTRIBUTESREQUEST_H
#define QTAWS_SETSUBSCRIPTIONATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class SetSubscriptionAttributesRequestPrivate;

class QTAWSSNS_EXPORT SetSubscriptionAttributesRequest : public SnsRequest {

public:
    SetSubscriptionAttributesRequest(const SetSubscriptionAttributesRequest &other);
    SetSubscriptionAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SetSubscriptionAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
