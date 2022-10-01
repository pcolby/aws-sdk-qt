// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSECURITYPROFILESFORTARGETREQUEST_P_H
#define QTAWS_LISTSECURITYPROFILESFORTARGETREQUEST_P_H

#include "iotrequest_p.h"
#include "listsecurityprofilesfortargetrequest.h"

namespace QtAws {
namespace IoT {

class ListSecurityProfilesForTargetRequest;

class ListSecurityProfilesForTargetRequestPrivate : public IoTRequestPrivate {

public:
    ListSecurityProfilesForTargetRequestPrivate(const IoTRequest::Action action,
                                   ListSecurityProfilesForTargetRequest * const q);
    ListSecurityProfilesForTargetRequestPrivate(const ListSecurityProfilesForTargetRequestPrivate &other,
                                   ListSecurityProfilesForTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListSecurityProfilesForTargetRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
