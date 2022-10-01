// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPROVIDERRESPONSE_H
#define QTAWS_GETIDENTITYPROVIDERRESPONSE_H

#include "workspaceswebresponse.h"
#include "getidentityproviderrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetIdentityProviderResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT GetIdentityProviderResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    GetIdentityProviderResponse(const GetIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetIdentityProviderResponse)
    Q_DISABLE_COPY(GetIdentityProviderResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
