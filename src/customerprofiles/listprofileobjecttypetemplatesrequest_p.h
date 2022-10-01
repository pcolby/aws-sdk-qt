// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROFILEOBJECTTYPETEMPLATESREQUEST_P_H
#define QTAWS_LISTPROFILEOBJECTTYPETEMPLATESREQUEST_P_H

#include "customerprofilesrequest_p.h"
#include "listprofileobjecttypetemplatesrequest.h"

namespace QtAws {
namespace CustomerProfiles {

class ListProfileObjectTypeTemplatesRequest;

class ListProfileObjectTypeTemplatesRequestPrivate : public CustomerProfilesRequestPrivate {

public:
    ListProfileObjectTypeTemplatesRequestPrivate(const CustomerProfilesRequest::Action action,
                                   ListProfileObjectTypeTemplatesRequest * const q);
    ListProfileObjectTypeTemplatesRequestPrivate(const ListProfileObjectTypeTemplatesRequestPrivate &other,
                                   ListProfileObjectTypeTemplatesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProfileObjectTypeTemplatesRequest)

};

} // namespace CustomerProfiles
} // namespace QtAws

#endif
