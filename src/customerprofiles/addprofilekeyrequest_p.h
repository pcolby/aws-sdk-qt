// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDPROFILEKEYREQUEST_P_H
#define QTAWS_ADDPROFILEKEYREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "addprofilekeyrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class AddProfileKeyRequest;

class AddProfileKeyRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    AddProfileKeyRequestPrivate(const CustomerProfilesRequest::Action action,
                                   AddProfileKeyRequest * const q);
    AddProfileKeyRequestPrivate(const AddProfileKeyRequestPrivate &other,
                                   AddProfileKeyRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddProfileKeyRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
