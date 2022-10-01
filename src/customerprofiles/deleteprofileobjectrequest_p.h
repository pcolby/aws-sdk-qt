// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEOBJECTREQUEST_P_H
#define QTAWS_DELETEPROFILEOBJECTREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "deleteprofileobjectrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileObjectRequest;

class DeleteProfileObjectRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    DeleteProfileObjectRequestPrivate(const CustomerProfilesRequest::Action action,
                                   DeleteProfileObjectRequest * const q);
    DeleteProfileObjectRequestPrivate(const DeleteProfileObjectRequestPrivate &other,
                                   DeleteProfileObjectRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProfileObjectRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
