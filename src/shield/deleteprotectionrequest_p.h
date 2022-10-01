// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTECTIONREQUEST_P_H
#define QTAWS_DELETEPROTECTIONREQUEST_P_H

#include "shieldrequest_p.h"
#include "deleteprotectionrequest.h"

namespace QtAws {
namespace Shield {

class DeleteProtectionRequest;

class DeleteProtectionRequestPrivate : public ShieldRequestPrivate {

public:
    DeleteProtectionRequestPrivate(const ShieldRequest::Action action,
                                   DeleteProtectionRequest * const q);
    DeleteProtectionRequestPrivate(const DeleteProtectionRequestPrivate &other,
                                   DeleteProtectionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteProtectionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
