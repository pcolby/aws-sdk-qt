// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEIPRULESREQUEST_H
#define QTAWS_AUTHORIZEIPRULESREQUEST_H

#include "workspacesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AuthorizeIpRulesRequestPrivate;

class QTAWSWORKSPACES_EXPORT AuthorizeIpRulesRequest : public WorkSpacesRequest {

public:
    AuthorizeIpRulesRequest(const AuthorizeIpRulesRequest &other);
    AuthorizeIpRulesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeIpRulesRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
