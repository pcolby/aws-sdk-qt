// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETPLATFORMAPPLICATIONATTRIBUTESREQUEST_P_H
#define QTAWS_SETPLATFORMAPPLICATIONATTRIBUTESREQUEST_P_H

#include "snsrequest_p.h"
#include "setplatformapplicationattributesrequest.h"

namespace QtAws {
namespace Sns {

class SetPlatformApplicationAttributesRequest;

class SetPlatformApplicationAttributesRequestPrivate : public SnsRequestPrivate {

public:
    SetPlatformApplicationAttributesRequestPrivate(const SnsRequest::Action action,
                                   SetPlatformApplicationAttributesRequest * const q);
    SetPlatformApplicationAttributesRequestPrivate(const SetPlatformApplicationAttributesRequestPrivate &other,
                                   SetPlatformApplicationAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetPlatformApplicationAttributesRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
