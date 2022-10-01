// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROFILEKEYREQUEST_P_H
#define QTAWS_DELETEPROFILEKEYREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "deleteprofilekeyrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class DeleteProfileKeyRequest;

class DeleteProfileKeyRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    DeleteProfileKeyRequestPrivate(const CustomerProfilesRequest::Action action,
                                   DeleteProfileKeyRequest * const q);
    DeleteProfileKeyRequestPrivate(const DeleteProfileKeyRequestPrivate &other,
                                   DeleteProfileKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProfileKeyRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
