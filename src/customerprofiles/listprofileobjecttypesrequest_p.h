// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTTYPESREQUEST_P_H
#define QTAWS_LISTPROFILEOBJECTTYPESREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listprofileobjecttypesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectTypesRequest;

class ListProfileObjectTypesRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListProfileObjectTypesRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListProfileObjectTypesRequest * const q);
    ListProfileObjectTypesRequestPrivate(const ListProfileObjectTypesRequestPrivate &other,
                                   ListProfileObjectTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProfileObjectTypesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
