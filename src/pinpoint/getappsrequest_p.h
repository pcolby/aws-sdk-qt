// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPSREQUEST_P_H
#define QTAWS_GETAPPSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getappsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetAppsRequest;

class GetAppsRequestPrivate : public PinpointRequestPrivate {

public:
    GetAppsRequestPrivate(const PinpointRequest::Action action,
                                   GetAppsRequest * const q);
    GetAppsRequestPrivate(const GetAppsRequestPrivate &other,
                                   GetAppsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
