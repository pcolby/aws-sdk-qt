// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCESTATEREQUEST_P_H
#define QTAWS_GETINSTANCESTATEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getinstancestaterequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceStateRequest;

class GetInstanceStateRequestPrivate : public LightsailRequestPrivate {

public:
    GetInstanceStateRequestPrivate(const LightsailRequest::Action action,
                                   GetInstanceStateRequest * const q);
    GetInstanceStateRequestPrivate(const GetInstanceStateRequestPrivate &other,
                                   GetInstanceStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceStateRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
