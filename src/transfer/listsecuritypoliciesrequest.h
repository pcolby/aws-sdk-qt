// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPOLICIESREQUEST_H
#define QTAWS_LISTSECURITYPOLICIESREQUEST_H

#include "transferrequest.h"

namespace QtAws {
namespace Transfer {

class ListSecurityPoliciesRequestPrivate;

class QTAWSTRANSFER_EXPORT ListSecurityPoliciesRequest : public TransferRequest {

public:
    ListSecurityPoliciesRequest(const ListSecurityPoliciesRequest &other);
    ListSecurityPoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListSecurityPoliciesRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
