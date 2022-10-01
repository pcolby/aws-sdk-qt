// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AUTHORIZEIPRULESRESPONSE_H
#define QTAWS_AUTHORIZEIPRULESRESPONSE_H

#include "workspacesresponse.h"
#include "authorizeiprulesrequest.h"

namespace QtAws {
namespace WorkSpaces {

class AuthorizeIpRulesResponsePrivate;

class QTAWSWORKSPACES_EXPORT AuthorizeIpRulesResponse : public WorkSpacesResponse {
    Q_OBJECT

public:
    AuthorizeIpRulesResponse(const AuthorizeIpRulesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AuthorizeIpRulesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AuthorizeIpRulesResponse)
    Q_DISABLE_COPY(AuthorizeIpRulesResponse)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
