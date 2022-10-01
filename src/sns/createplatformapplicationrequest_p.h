// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPLATFORMAPPLICATIONREQUEST_P_H
#define QTAWS_CREATEPLATFORMAPPLICATIONREQUEST_P_H

#include "snsrequest_p.h"
#include "createplatformapplicationrequest.h"

namespace QtAws {
namespace Sns {

class CreatePlatformApplicationRequest;

class CreatePlatformApplicationRequestPrivate : public SnsRequestPrivate {

public:
    CreatePlatformApplicationRequestPrivate(const SnsRequest::Action action,
                                   CreatePlatformApplicationRequest * const q);
    CreatePlatformApplicationRequestPrivate(const CreatePlatformApplicationRequestPrivate &other,
                                   CreatePlatformApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePlatformApplicationRequest)

};

} // namespace Sns
} // namespace QtAws

#endif
