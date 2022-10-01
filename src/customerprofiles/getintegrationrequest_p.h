// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINTEGRATIONREQUEST_P_H
#define QTAWS_GETINTEGRATIONREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "getintegrationrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetIntegrationRequest;

class GetIntegrationRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    GetIntegrationRequestPrivate(const CustomerProfilesRequest::Action action,
                                   GetIntegrationRequest * const q);
    GetIntegrationRequestPrivate(const GetIntegrationRequestPrivate &other,
                                   GetIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetIntegrationRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
