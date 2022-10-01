// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPPREQUEST_P_H
#define QTAWS_GETAPPREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getapprequest.h"

namespace QtAws {
namespace Pinpoint {

class GetAppRequest;

class GetAppRequestPrivate : public PinpointRequestPrivate {

public:
    GetAppRequestPrivate(const PinpointRequest::Action action,
                                   GetAppRequest * const q);
    GetAppRequestPrivate(const GetAppRequestPrivate &other,
                                   GetAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAppRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
