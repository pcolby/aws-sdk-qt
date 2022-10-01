// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPROVIDERRESPONSE_H
#define QTAWS_DELETEIDENTITYPROVIDERRESPONSE_H

#include "workspaceswebresponse.h"
#include "deleteidentityproviderrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteIdentityProviderResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT DeleteIdentityProviderResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    DeleteIdentityProviderResponse(const DeleteIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteIdentityProviderResponse)
    Q_DISABLE_COPY(DeleteIdentityProviderResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
