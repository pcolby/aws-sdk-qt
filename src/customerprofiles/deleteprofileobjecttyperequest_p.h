// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEOBJECTTYPEREQUEST_P_H
#define QTAWS_DELETEPROFILEOBJECTTYPEREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "deleteprofileobjecttyperequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileObjectTypeRequest;

class DeleteProfileObjectTypeRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    DeleteProfileObjectTypeRequestPrivate(const CustomerProfilesRequest::Action action,
                                   DeleteProfileObjectTypeRequest * const q);
    DeleteProfileObjectTypeRequestPrivate(const DeleteProfileObjectTypeRequestPrivate &other,
                                   DeleteProfileObjectTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProfileObjectTypeRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
