// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLESECURITYHUBRESPONSE_P_H
#define QTAWS_DISABLESECURITYHUBRESPONSE_P_H

#include "securityhubresponse_p.h"

namespace QtAws {
namespace SecurityHub {

class DisableSecurityHubResponse;

class DisableSecurityHubResponsePrivate : public SecurityHubResponsePrivate {

public:

    explicit DisableSecurityHubResponsePrivate(DisableSecurityHubResponse * const q);

    void parseDisableSecurityHubResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableSecurityHubResponse)
    Q_DISABLE_COPY(DisableSecurityHubResponsePrivate)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
