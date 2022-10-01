// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEMPLATESYNCCONFIGREQUEST_P_H
#define QTAWS_DELETETEMPLATESYNCCONFIGREQUEST_P_H

#include "protonrequest_p.h"
#include "deletetemplatesyncconfigrequest.h"

namespace QtAws {
namespace Proton {

class DeleteTemplateSyncConfigRequest;

class DeleteTemplateSyncConfigRequestPrivate : public ProtonRequestPrivate {

public:
    DeleteTemplateSyncConfigRequestPrivate(const ProtonRequest::Action action,
                                   DeleteTemplateSyncConfigRequest * const q);
    DeleteTemplateSyncConfigRequestPrivate(const DeleteTemplateSyncConfigRequestPrivate &other,
                                   DeleteTemplateSyncConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTemplateSyncConfigRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
