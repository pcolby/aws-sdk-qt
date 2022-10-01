// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPLATFORMAPPLICATIONATTRIBUTESREQUEST_P_H
#define QTAWS_GETPLATFORMAPPLICATIONATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "getplatformapplicationattributesrequest.h"

namespace QtAws {
namespace Sns {

class GetPlatformApplicationAttributesRequest;

class GetPlatformApplicationAttributesRequestPrivate : public SnsRequestPrivate {

public:
    GetPlatformApplicationAttributesRequestPrivate(const SnsRequest::Action action,
                                   GetPlatformApplicationAttributesRequest * const q);
    GetPlatformApplicationAttributesRequestPrivate(const GetPlatformApplicationAttributesRequestPrivate &other,
                                   GetPlatformApplicationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPlatformApplicationAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
