// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWORKSPACEALIASREQUEST_P_H
#define QTAWS_UPDATEWORKSPACEALIASREQUEST_P_H

#include "amprequest_p.h"
#include "updateworkspacealiasrequest.h"

namespace QtAws {
namespace Amp {

class UpdateWorkspaceAliasRequest;

class UpdateWorkspaceAliasRequestPrivate : public AmpRequestPrivate {

public:
    UpdateWorkspaceAliasRequestPrivate(const AmpRequest::Action action,
                                   UpdateWorkspaceAliasRequest * const q);
    UpdateWorkspaceAliasRequestPrivate(const UpdateWorkspaceAliasRequestPrivate &other,
                                   UpdateWorkspaceAliasRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateWorkspaceAliasRequest)

};

} // namespace Amp
} // namespace QtAws

#endif
