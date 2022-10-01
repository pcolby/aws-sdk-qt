// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTASSOCIATIONSREQUEST_H
#define QTAWS_LISTACCOUNTASSOCIATIONSREQUEST_H

#include "billingconductorrequest.h"

namespace QtAws {
namespace BillingConductor {

class ListAccountAssociationsRequestPrivate;

class QTAWSBILLINGCONDUCTOR_EXPORT ListAccountAssociationsRequest : public BillingConductorRequest {

public:
    ListAccountAssociationsRequest(const ListAccountAssociationsRequest &other);
    ListAccountAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListAccountAssociationsRequest)

};

} // namespace BillingConductor
} // namespace QtAws

#endif
