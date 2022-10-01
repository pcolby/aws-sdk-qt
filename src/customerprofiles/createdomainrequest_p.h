// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDOMAINREQUEST_P_H
#define QTAWS_CREATEDOMAINREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "createdomainrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateDomainRequest;

class CreateDomainRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    CreateDomainRequestPrivate(const CustomerProfilesRequest::Action action,
                                   CreateDomainRequest * const q);
    CreateDomainRequestPrivate(const CreateDomainRequestPrivate &other,
                                   CreateDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDomainRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
