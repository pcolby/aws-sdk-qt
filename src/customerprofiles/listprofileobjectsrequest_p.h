// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTSREQUEST_P_H
#define QTAWS_LISTPROFILEOBJECTSREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listprofileobjectsrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectsRequest;

class ListProfileObjectsRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListProfileObjectsRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListProfileObjectsRequest * const q);
    ListProfileObjectsRequestPrivate(const ListProfileObjectsRequestPrivate &other,
                                   ListProfileObjectsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProfileObjectsRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
