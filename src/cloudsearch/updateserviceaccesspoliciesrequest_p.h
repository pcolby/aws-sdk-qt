// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICEACCESSPOLICIESREQUEST_P_H
#define QTAWS_UPDATESERVICEACCESSPOLICIESREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "updateserviceaccesspoliciesrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateServiceAccessPoliciesRequest;

class UpdateServiceAccessPoliciesRequestPrivate : public CloudSearchRequestPrivate {

public:
    UpdateServiceAccessPoliciesRequestPrivate(const CloudSearchRequest::Action action,
                                   UpdateServiceAccessPoliciesRequest * const q);
    UpdateServiceAccessPoliciesRequestPrivate(const UpdateServiceAccessPoliciesRequestPrivate &other,
                                   UpdateServiceAccessPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateServiceAccessPoliciesRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
