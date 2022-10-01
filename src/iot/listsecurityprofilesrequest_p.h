// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILESREQUEST_P_H
#define QTAWS_LISTSECURITYPROFILESREQUEST_P_H

#include "iotrequest_p.h"
#include "listsecurityprofilesrequest.h"

namespace QtAws {
namespace IoT {

class ListSecurityProfilesRequest;

class ListSecurityProfilesRequestPrivate : public IoTRequestPrivate {

public:
    ListSecurityProfilesRequestPrivate(const IoTRequest::Action action,
                                   ListSecurityProfilesRequest * const q);
    ListSecurityProfilesRequestPrivate(const ListSecurityProfilesRequestPrivate &other,
                                   ListSecurityProfilesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSecurityProfilesRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
