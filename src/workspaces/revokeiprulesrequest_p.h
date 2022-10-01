// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEIPRULESREQUEST_P_H
#define QTAWS_REVOKEIPRULESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "revokeiprulesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class RevokeIpRulesRequest;

class RevokeIpRulesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    RevokeIpRulesRequestPrivate(const WorkSpacesRequest::Action action,
                                   RevokeIpRulesRequest * const q);
    RevokeIpRulesRequestPrivate(const RevokeIpRulesRequestPrivate &other,
                                   RevokeIpRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeIpRulesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
