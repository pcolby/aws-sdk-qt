// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDOMAINREQUEST_P_H
#define QTAWS_UPDATEDOMAINREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "updatedomainrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class UpdateDomainRequest;

class UpdateDomainRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    UpdateDomainRequestPrivate(const CustomerProfilesRequest::Action action,
                                   UpdateDomainRequest * const q);
    UpdateDomainRequestPrivate(const UpdateDomainRequestPrivate &other,
                                   UpdateDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDomainRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
