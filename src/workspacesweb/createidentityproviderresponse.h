// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPROVIDERRESPONSE_H
#define QTAWS_CREATEIDENTITYPROVIDERRESPONSE_H

#include "workspaceswebresponse.h"
#include "createidentityproviderrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class CreateIdentityProviderResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT CreateIdentityProviderResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    CreateIdentityProviderResponse(const CreateIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateIdentityProviderResponse)
    Q_DISABLE_COPY(CreateIdentityProviderResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
