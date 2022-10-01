// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEIDENTITYPROVIDERRESPONSE_H
#define QTAWS_UPDATEIDENTITYPROVIDERRESPONSE_H

#include "workspaceswebresponse.h"
#include "updateidentityproviderrequest.h"

namespace QtAws {
namespace WorkSpacesWeb {

class UpdateIdentityProviderResponsePrivate;

class QTAWSWORKSPACESWEB_EXPORT UpdateIdentityProviderResponse : public WorkSpacesWebResponse {
    Q_OBJECT

public:
    UpdateIdentityProviderResponse(const UpdateIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateIdentityProviderResponse)
    Q_DISABLE_COPY(UpdateIdentityProviderResponse)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
