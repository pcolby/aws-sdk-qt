// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCLIENTRESPONSE_P_H
#define QTAWS_REGISTERCLIENTRESPONSE_P_H

#include "ssooidcresponse_p.h"

namespace QtAws {
namespace SsoOidc {

class RegisterClientResponse;

class RegisterClientResponsePrivate : public SsoOidcResponsePrivate {

public:

    explicit RegisterClientResponsePrivate(RegisterClientResponse * const q);

    void parseRegisterClientResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterClientResponse)
    Q_DISABLE_COPY(RegisterClientResponsePrivate)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
