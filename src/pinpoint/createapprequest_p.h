// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPREQUEST_P_H
#define QTAWS_CREATEAPPREQUEST_P_H

#include "pinpointrequest_p.h"
#include "createapprequest.h"

namespace QtAws {
namespace Pinpoint {

class CreateAppRequest;

class CreateAppRequestPrivate : public PinpointRequestPrivate {

public:
    CreateAppRequestPrivate(const PinpointRequest::Action action,
                                   CreateAppRequest * const q);
    CreateAppRequestPrivate(const CreateAppRequestPrivate &other,
                                   CreateAppRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
