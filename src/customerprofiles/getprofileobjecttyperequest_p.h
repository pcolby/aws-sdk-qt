// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROFILEOBJECTTYPEREQUEST_P_H
#define QTAWS_GETPROFILEOBJECTTYPEREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "getprofileobjecttyperequest.h"

namespace QtAws {
namespace CustomerProfiles {

class GetProfileObjectTypeRequest;

class GetProfileObjectTypeRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    GetProfileObjectTypeRequestPrivate(const CustomerProfilesRequest::Action action,
                                   GetProfileObjectTypeRequest * const q);
    GetProfileObjectTypeRequestPrivate(const GetProfileObjectTypeRequestPrivate &other,
                                   GetProfileObjectTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProfileObjectTypeRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
