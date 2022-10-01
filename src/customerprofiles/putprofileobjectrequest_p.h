// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROFILEOBJECTREQUEST_P_H
#define QTAWS_PUTPROFILEOBJECTREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "putprofileobjectrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class PutProfileObjectRequest;

class PutProfileObjectRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    PutProfileObjectRequestPrivate(const CustomerProfilesRequest::Action action,
                                   PutProfileObjectRequest * const q);
    PutProfileObjectRequestPrivate(const PutProfileObjectRequestPrivate &other,
                                   PutProfileObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutProfileObjectRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
