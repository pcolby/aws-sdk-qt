// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECUSTOMDOMAINRESPONSE_H
#define QTAWS_DISASSOCIATECUSTOMDOMAINRESPONSE_H

#include "apprunnerresponse.h"
#include "disassociatecustomdomainrequest.h"

namespace QtAws {
namespace AppRunner {

class DisassociateCustomDomainResponsePrivate;

class QTAWSAPPRUNNER_EXPORT DisassociateCustomDomainResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    DisassociateCustomDomainResponse(const DisassociateCustomDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateCustomDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateCustomDomainResponse)
    Q_DISABLE_COPY(DisassociateCustomDomainResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
