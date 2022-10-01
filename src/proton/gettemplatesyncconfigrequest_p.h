// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESYNCCONFIGREQUEST_P_H
#define QTAWS_GETTEMPLATESYNCCONFIGREQUEST_P_H

#include "protonrequest_p.h"
#include "gettemplatesyncconfigrequest.h"

namespace QtAws {
namespace Proton {

class GetTemplateSyncConfigRequest;

class GetTemplateSyncConfigRequestPrivate : public ProtonRequestPrivate {

public:
    GetTemplateSyncConfigRequestPrivate(const ProtonRequest::Action action,
                                   GetTemplateSyncConfigRequest * const q);
    GetTemplateSyncConfigRequestPrivate(const GetTemplateSyncConfigRequestPrivate &other,
                                   GetTemplateSyncConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTemplateSyncConfigRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
