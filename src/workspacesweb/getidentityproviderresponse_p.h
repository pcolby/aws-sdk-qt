// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_GETIDENTITYPROVIDERRESPONSE_P_H

#include "workspaceswebresponse_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

class GetIdentityProviderResponse;

class GetIdentityProviderResponsePrivate : public WorkSpacesWebResponsePrivate {

public:

    explicit GetIdentityProviderResponsePrivate(GetIdentityProviderResponse * const q);

    void parseGetIdentityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetIdentityProviderResponse)
    Q_DISABLE_COPY(GetIdentityProviderResponsePrivate)

};

} // namespace WorkSpacesWeb
} // namespace QtAws

#endif
