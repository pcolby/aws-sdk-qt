// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMENDPOINTREQUEST_P_H
#define QTAWS_CREATEPLATFORMENDPOINTREQUEST_P_H

#include "snsrequest_p.h"
#include "createplatformendpointrequest.h"

namespace QtAws {
namespace Sns {

class CreatePlatformEndpointRequest;

class CreatePlatformEndpointRequestPrivate : public SnsRequestPrivate {

public:
    CreatePlatformEndpointRequestPrivate(const SnsRequest::Action action,
                                   CreatePlatformEndpointRequest * const q);
    CreatePlatformEndpointRequestPrivate(const CreatePlatformEndpointRequestPrivate &other,
                                   CreatePlatformEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePlatformEndpointRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
