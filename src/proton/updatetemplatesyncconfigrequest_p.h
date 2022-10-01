// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATETEMPLATESYNCCONFIGREQUEST_P_H
#define QTAWS_UPDATETEMPLATESYNCCONFIGREQUEST_P_H

#include "protonrequest_p.h"
#include "updatetemplatesyncconfigrequest.h"

namespace QtAws {
namespace Proton {

class UpdateTemplateSyncConfigRequest;

class UpdateTemplateSyncConfigRequestPrivate : public ProtonRequestPrivate {

public:
    UpdateTemplateSyncConfigRequestPrivate(const ProtonRequest::Action action,
                                   UpdateTemplateSyncConfigRequest * const q);
    UpdateTemplateSyncConfigRequestPrivate(const UpdateTemplateSyncConfigRequestPrivate &other,
                                   UpdateTemplateSyncConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateTemplateSyncConfigRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
