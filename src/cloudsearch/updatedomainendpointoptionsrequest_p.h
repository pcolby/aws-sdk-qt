// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINENDPOINTOPTIONSREQUEST_P_H
#define QTAWS_UPDATEDOMAINENDPOINTOPTIONSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "updatedomainendpointoptionsrequest.h"

namespace QtAws {
namespace CloudSearch {

class UpdateDomainEndpointOptionsRequest;

class UpdateDomainEndpointOptionsRequestPrivate : public CloudSearchRequestPrivate {

public:
    UpdateDomainEndpointOptionsRequestPrivate(const CloudSearchRequest::Action action,
                                   UpdateDomainEndpointOptionsRequest * const q);
    UpdateDomainEndpointOptionsRequestPrivate(const UpdateDomainEndpointOptionsRequestPrivate &other,
                                   UpdateDomainEndpointOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainEndpointOptionsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
