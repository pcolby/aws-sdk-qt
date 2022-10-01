// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVAULTNOTIFICATIONSREQUEST_P_H
#define QTAWS_GETVAULTNOTIFICATIONSREQUEST_P_H

#include "glacierrequest_p.h"
#include "getvaultnotificationsrequest.h"

namespace QtAws {
namespace Glacier {

class GetVaultNotificationsRequest;

class GetVaultNotificationsRequestPrivate : public GlacierRequestPrivate {

public:
    GetVaultNotificationsRequestPrivate(const GlacierRequest::Action action,
                                   GetVaultNotificationsRequest * const q);
    GetVaultNotificationsRequestPrivate(const GetVaultNotificationsRequestPrivate &other,
                                   GetVaultNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVaultNotificationsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
