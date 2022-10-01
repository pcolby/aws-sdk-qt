// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECUSTOMDOMAINRESPONSE_P_H
#define QTAWS_DISASSOCIATECUSTOMDOMAINRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DisassociateCustomDomainResponse;

class DisassociateCustomDomainResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DisassociateCustomDomainResponsePrivate(DisassociateCustomDomainResponse * const q);

    void parseDisassociateCustomDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateCustomDomainResponse)
    Q_DISABLE_COPY(DisassociateCustomDomainResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
