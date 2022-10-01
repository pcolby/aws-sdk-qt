// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETROLECREDENTIALSRESPONSE_P_H
#define QTAWS_GETROLECREDENTIALSRESPONSE_P_H

#include "ssoresponse_p.h"

namespace QtAws {
namespace Sso {

class GetRoleCredentialsResponse;

class GetRoleCredentialsResponsePrivate : public SsoResponsePrivate {

public:

    explicit GetRoleCredentialsResponsePrivate(GetRoleCredentialsResponse * const q);

    void parseGetRoleCredentialsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRoleCredentialsResponse)
    Q_DISABLE_COPY(GetRoleCredentialsResponsePrivate)

};

} // namespace Sso
} // namespace QtAws

#endif
