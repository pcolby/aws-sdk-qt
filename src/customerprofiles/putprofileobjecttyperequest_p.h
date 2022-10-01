// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROFILEOBJECTTYPEREQUEST_P_H
#define QTAWS_PUTPROFILEOBJECTTYPEREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "putprofileobjecttyperequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutProfileObjectTypeRequest;

class PutProfileObjectTypeRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    PutProfileObjectTypeRequestPrivate(const CustomerProfilesRequest::Action action,
                                   PutProfileObjectTypeRequest * const q);
    PutProfileObjectTypeRequestPrivate(const PutProfileObjectTypeRequestPrivate &other,
                                   PutProfileObjectTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutProfileObjectTypeRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
