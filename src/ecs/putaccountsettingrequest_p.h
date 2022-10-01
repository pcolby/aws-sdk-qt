// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTACCOUNTSETTINGREQUEST_P_H
#define QTAWS_PUTACCOUNTSETTINGREQUEST_P_H

#include "ecsrequest_p.h"
#include "putaccountsettingrequest.h"

namespace QtAws {
namespace Ecs {

class PutAccountSettingRequest;

class PutAccountSettingRequestPrivate : public EcsRequestPrivate {

public:
    PutAccountSettingRequestPrivate(const EcsRequest::Action action,
                                   PutAccountSettingRequest * const q);
    PutAccountSettingRequestPrivate(const PutAccountSettingRequestPrivate &other,
                                   PutAccountSettingRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutAccountSettingRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
