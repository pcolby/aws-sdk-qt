/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIOREQUEST_P_H
#define QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIOREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "disassociateproductfromportfoliorequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateProductFromPortfolioRequest;

class QTAWS_EXPORT DisassociateProductFromPortfolioRequestPrivate : public ServiceCatalogRequestPrivate {

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
