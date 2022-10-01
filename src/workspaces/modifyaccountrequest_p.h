// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYACCOUNTREQUEST_P_H
#define QTAWS_MODIFYACCOUNTREQUEST_P_H

#include "workspacesrequest_p.h"
#include "modifyaccountrequest.h"

namespace QtAws {
namespace WorkSpaces {

class ModifyAccountRequest;

class ModifyAccountRequestPrivate : public WorkSpacesRequestPrivate {

public:
    ModifyAccountRequestPrivate(const WorkSpacesRequest::Action action,
                                   ModifyAccountRequest * const q);
    ModifyAccountRequestPrivate(const ModifyAccountRequestPrivate &other,
                                   ModifyAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyAccountRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
