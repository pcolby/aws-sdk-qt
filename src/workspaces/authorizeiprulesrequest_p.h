// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEIPRULESREQUEST_P_H
#define QTAWS_AUTHORIZEIPRULESREQUEST_P_H

#include "workspacesrequest_p.h"
#include "authorizeiprulesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AuthorizeIpRulesRequest;

class AuthorizeIpRulesRequestPrivate : public WorkSpacesRequestPrivate {

public:
    AuthorizeIpRulesRequestPrivate(const WorkSpacesRequest::Action action,
                                   AuthorizeIpRulesRequest * const q);
    AuthorizeIpRulesRequestPrivate(const AuthorizeIpRulesRequestPrivate &other,
                                   AuthorizeIpRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AuthorizeIpRulesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
