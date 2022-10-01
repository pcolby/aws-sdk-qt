// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRINCIPALFROMPORTFOLIOREQUEST_P_H
#define QTAWS_DISASSOCIATEPRINCIPALFROMPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "disassociateprincipalfromportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociatePrincipalFromPortfolioRequest;

class DisassociatePrincipalFromPortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DisassociatePrincipalFromPortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DisassociatePrincipalFromPortfolioRequest * const q);
    DisassociatePrincipalFromPortfolioRequestPrivate(const DisassociatePrincipalFromPortfolioRequestPrivate &other,
                                   DisassociatePrincipalFromPortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociatePrincipalFromPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
