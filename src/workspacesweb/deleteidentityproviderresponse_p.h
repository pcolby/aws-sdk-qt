// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_DELETEIDENTITYPROVIDERRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class DeleteIdentityProviderResponse;

class DeleteIdentityProviderResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit DeleteIdentityProviderResponsePrivate(DeleteIdentityProviderResponse * const q);

    void parseDeleteIdentityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityProviderResponse)
    Q_DISABLE_COPY(DeleteIdentityProviderResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
