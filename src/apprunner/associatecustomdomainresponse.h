// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECUSTOMDOMAINRESPONSE_H
#define QTAWS_ASSOCIATECUSTOMDOMAINRESPONSE_H

#include "apprunnerresponse.h"
#include "associatecustomdomainrequest.h"

namespace QtAws {
namespace AppRunner {

class AssociateCustomDomainResponsePrivate;

class QTAWSAPPRUNNER_EXPORT AssociateCustomDomainResponse : public AppRunnerResponse {
    Q_OBJECT

public:
    AssociateCustomDomainResponse(const AssociateCustomDomainRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateCustomDomainRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateCustomDomainResponse)
    Q_DISABLE_COPY(AssociateCustomDomainResponse)

};

} // namespace AppRunner
} // namespace QtAws

#endif
