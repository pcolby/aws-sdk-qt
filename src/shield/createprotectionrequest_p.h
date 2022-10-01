// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROTECTIONREQUEST_P_H
#define QTAWS_CREATEPROTECTIONREQUEST_P_H

#include "shieldrequest_p.h"
#include "createprotectionrequest.h"

namespace QtAws {
namespace Shield {

class CreateProtectionRequest;

class CreateProtectionRequestPrivate : public ShieldRequestPrivate {

public:
    CreateProtectionRequestPrivate(const ShieldRequest::Action action,
                                   CreateProtectionRequest * const q);
    CreateProtectionRequestPrivate(const CreateProtectionRequestPrivate &other,
                                   CreateProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProtectionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
