// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVAULTNOTIFICATIONSREQUEST_P_H
#define QTAWS_DELETEVAULTNOTIFICATIONSREQUEST_P_H

#include "glacierrequest_p.h"
#include "deletevaultnotificationsrequest.h"

namespace QtAws {
namespace Glacier {

class DeleteVaultNotificationsRequest;

class DeleteVaultNotificationsRequestPrivate : public GlacierRequestPrivate {

public:
    DeleteVaultNotificationsRequestPrivate(const GlacierRequest::Action action,
                                   DeleteVaultNotificationsRequest * const q);
    DeleteVaultNotificationsRequestPrivate(const DeleteVaultNotificationsRequestPrivate &other,
                                   DeleteVaultNotificationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVaultNotificationsRequest)

};

} // namespace Glacier
} // namespace QtAws

#endif
