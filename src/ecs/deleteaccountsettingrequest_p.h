// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEACCOUNTSETTINGREQUEST_P_H
#define QTAWS_DELETEACCOUNTSETTINGREQUEST_P_H

#include "ecsrequest_p.h"
#include "deleteaccountsettingrequest.h"

namespace QtAws {
namespace Ecs {

class DeleteAccountSettingRequest;

class DeleteAccountSettingRequestPrivate : public EcsRequestPrivate {

public:
    DeleteAccountSettingRequestPrivate(const EcsRequest::Action action,
                                   DeleteAccountSettingRequest * const q);
    DeleteAccountSettingRequestPrivate(const DeleteAccountSettingRequestPrivate &other,
                                   DeleteAccountSettingRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAccountSettingRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
