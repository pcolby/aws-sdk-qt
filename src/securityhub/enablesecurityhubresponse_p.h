// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLESECURITYHUBRESPONSE_P_H
#define QTAWS_ENABLESECURITYHUBRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class EnableSecurityHubResponse;

class EnableSecurityHubResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit EnableSecurityHubResponsePrivate(EnableSecurityHubResponse * const q);

    void parseEnableSecurityHubResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableSecurityHubResponse)
    Q_DISABLE_COPY(EnableSecurityHubResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
