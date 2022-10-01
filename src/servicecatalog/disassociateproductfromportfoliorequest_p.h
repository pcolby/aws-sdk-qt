// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIOREQUEST_P_H
#define QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "disassociateproductfromportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateProductFromPortfolioRequest;

class DisassociateProductFromPortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    DisassociateProductFromPortfolioRequestPrivate(const ServiceCatalogRequest::Action action,
                                   DisassociateProductFromPortfolioRequest * const q);
    DisassociateProductFromPortfolioRequestPrivate(const DisassociateProductFromPortfolioRequestPrivate &other,
                                   DisassociateProductFromPortfolioRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateProductFromPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
