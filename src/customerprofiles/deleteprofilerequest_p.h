// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEREQUEST_P_H
#define QTAWS_DELETEPROFILEREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "deleteprofilerequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileRequest;

class DeleteProfileRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    DeleteProfileRequestPrivate(const CustomerProfilesRequest::Action action,
                                   DeleteProfileRequest * const q);
    DeleteProfileRequestPrivate(const DeleteProfileRequestPrivate &other,
                                   DeleteProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProfileRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
