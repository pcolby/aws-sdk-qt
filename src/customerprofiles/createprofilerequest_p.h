// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROFILEREQUEST_P_H
#define QTAWS_CREATEPROFILEREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "createprofilerequest.h"

namespace QtAws {
namespace CustomerProfiles {

class CreateProfileRequest;

class CreateProfileRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    CreateProfileRequestPrivate(const CustomerProfilesRequest::Action action,
                                   CreateProfileRequest * const q);
    CreateProfileRequestPrivate(const CreateProfileRequestPrivate &other,
                                   CreateProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProfileRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
