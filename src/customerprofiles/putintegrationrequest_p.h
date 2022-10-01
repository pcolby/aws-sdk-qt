// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINTEGRATIONREQUEST_P_H
#define QTAWS_PUTINTEGRATIONREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "putintegrationrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutIntegrationRequest;

class PutIntegrationRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    PutIntegrationRequestPrivate(const CustomerProfilesRequest::Action action,
                                   PutIntegrationRequest * const q);
    PutIntegrationRequestPrivate(const PutIntegrationRequestPrivate &other,
                                   PutIntegrationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutIntegrationRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
