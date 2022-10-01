// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTEMPLATESYNCSTATUSREQUEST_P_H
#define QTAWS_GETTEMPLATESYNCSTATUSREQUEST_P_H

#include "protonrequest_p.h"
#include "gettemplatesyncstatusrequest.h"

namespace QtAws {
namespace Proton {

class GetTemplateSyncStatusRequest;

class GetTemplateSyncStatusRequestPrivate : public ProtonRequestPrivate {

public:
    GetTemplateSyncStatusRequestPrivate(const ProtonRequest::Action action,
                                   GetTemplateSyncStatusRequest * const q);
    GetTemplateSyncStatusRequestPrivate(const GetTemplateSyncStatusRequestPrivate &other,
                                   GetTemplateSyncStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetTemplateSyncStatusRequest)

};

} // namespace Proton
} // namespace QtAws

#endif
