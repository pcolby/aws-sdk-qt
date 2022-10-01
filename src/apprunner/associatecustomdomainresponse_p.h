// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECUSTOMDOMAINRESPONSE_P_H
#define QTAWS_ASSOCIATECUSTOMDOMAINRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class AssociateCustomDomainResponse;

class AssociateCustomDomainResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit AssociateCustomDomainResponsePrivate(AssociateCustomDomainResponse * const q);

    void parseAssociateCustomDomainResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateCustomDomainResponse)
    Q_DISABLE_COPY(AssociateCustomDomainResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
