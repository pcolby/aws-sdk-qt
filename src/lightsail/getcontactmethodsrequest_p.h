// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONTACTMETHODSREQUEST_P_H
#define QTAWS_GETCONTACTMETHODSREQUEST_P_H

#include "lightsailrequest_p.h"
#include "getcontactmethodsrequest.h"

namespace QtAws {
namespace Lightsail {

class GetContactMethodsRequest;

class GetContactMethodsRequestPrivate : public LightsailRequestPrivate {

public:
    GetContactMethodsRequestPrivate(const LightsailRequest::Action action,
                                   GetContactMethodsRequest * const q);
    GetContactMethodsRequestPrivate(const GetContactMethodsRequestPrivate &other,
                                   GetContactMethodsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetContactMethodsRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
