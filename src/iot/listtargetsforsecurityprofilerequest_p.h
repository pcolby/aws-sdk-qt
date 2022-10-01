// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSFORSECURITYPROFILEREQUEST_P_H
#define QTAWS_LISTTARGETSFORSECURITYPROFILEREQUEST_P_H

#include "iotrequest_p.h"
#include "listtargetsforsecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class ListTargetsForSecurityProfileRequest;

class ListTargetsForSecurityProfileRequestPrivate : public IoTRequestPrivate {

public:
    ListTargetsForSecurityProfileRequestPrivate(const IoTRequest::Action action,
                                   ListTargetsForSecurityProfileRequest * const q);
    ListTargetsForSecurityProfileRequestPrivate(const ListTargetsForSecurityProfileRequestPrivate &other,
                                   ListTargetsForSecurityProfileRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTargetsForSecurityProfileRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
