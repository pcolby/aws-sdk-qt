// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSUBSCRIPTIONATTRIBUTESREQUEST_H
#define QTAWS_GETSUBSCRIPTIONATTRIBUTESREQUEST_H

#include "snsrequest.h"

namespace QtAws {
namespace Sns {

class GetSubscriptionAttributesRequestPrivate;

class QTAWSSNS_EXPORT GetSubscriptionAttributesRequest : public SnsRequest {

public:
    GetSubscriptionAttributesRequest(const GetSubscriptionAttributesRequest &other);
    GetSubscriptionAttributesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetSubscriptionAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
