// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSTANCEACCESSDETAILSREQUEST_P_H
#define QTAWS_GETINSTANCEACCESSDETAILSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getinstanceaccessdetailsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetInstanceAccessDetailsRequest;

class GetInstanceAccessDetailsRequestPrivate : public LightsailRequestPrivate {

public:
    GetInstanceAccessDetailsRequestPrivate(const LightsailRequest::Action action,
                                   GetInstanceAccessDetailsRequest * const q);
    GetInstanceAccessDetailsRequestPrivate(const GetInstanceAccessDetailsRequestPrivate &other,
                                   GetInstanceAccessDetailsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetInstanceAccessDetailsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
