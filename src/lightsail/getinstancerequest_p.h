// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEREQUEST_P_H
#define QTAWS_GETINSTANCEREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getinstancerequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceRequest;

class GetInstanceRequestPrivate : public LightsailRequestPrivate {

public:
    GetInstanceRequestPrivate(const LightsailRequest::Action action,
                                   GetInstanceRequest * const q);
    GetInstanceRequestPrivate(const GetInstanceRequestPrivate &other,
                                   GetInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
