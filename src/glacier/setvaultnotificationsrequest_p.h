// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVAULTNOTIFICATIONSREQUEST_P_H
#define QTAWS_SETVAULTNOTIFICATIONSREQUEST_P_H

#include "glacierrequest_p.h"
#include "setvaultnotificationsrequest.h"

namespace QtAws {
namespace Glacier {

class SetVaultNotificationsRequest;

class SetVaultNotificationsRequestPrivate : public GlacierRequestPrivate {

public:
    SetVaultNotificationsRequestPrivate(const GlacierRequest::Action action,
                                   SetVaultNotificationsRequest * const q);
    SetVaultNotificationsRequestPrivate(const SetVaultNotificationsRequestPrivate &other,
                                   SetVaultNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetVaultNotificationsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
