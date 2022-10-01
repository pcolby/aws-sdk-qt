// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETEMPLATESYNCCONFIGREQUEST_P_H
#define QTAWS_CREATETEMPLATESYNCCONFIGREQUEST_P_H

#include "protonrequest_p.h"
#include "createtemplatesyncconfigrequest.h"

namespace QtAws {
namespace Proton {

class CreateTemplateSyncConfigRequest;

class CreateTemplateSyncConfigRequestPrivate : public ProtonRequestPrivate {

public:
    CreateTemplateSyncConfigRequestPrivate(const ProtonRequest::Action action,
                                   CreateTemplateSyncConfigRequest * const q);
    CreateTemplateSyncConfigRequestPrivate(const CreateTemplateSyncConfigRequestPrivate &other,
                                   CreateTemplateSyncConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateTemplateSyncConfigRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
