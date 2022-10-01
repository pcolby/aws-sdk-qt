// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTACCOUNTSETTINGSREQUEST_P_H
#define QTAWS_LISTACCOUNTSETTINGSREQUEST_P_H

#include "ecsrequest_p.h"
#include "listaccountsettingsrequest.h"

namespace QtAws {
namespace Ecs {

class ListAccountSettingsRequest;

class ListAccountSettingsRequestPrivate : public EcsRequestPrivate {

public:
    ListAccountSettingsRequestPrivate(const EcsRequest::Action action,
                                   ListAccountSettingsRequest * const q);
    ListAccountSettingsRequestPrivate(const ListAccountSettingsRequestPrivate &other,
                                   ListAccountSettingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAccountSettingsRequest)

};

} // namespace Ecs
} // namespace QtAws

#endif
