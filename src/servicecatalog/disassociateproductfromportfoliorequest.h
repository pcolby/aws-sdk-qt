// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIOREQUEST_H
#define QTAWS_DISASSOCIATEPRODUCTFROMPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociateProductFromPortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DisassociateProductFromPortfolioRequest : public ServiceCatalogRequest {

public:
    DisassociateProductFromPortfolioRequest(const DisassociateProductFromPortfolioRequest &other);
    DisassociateProductFromPortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateProductFromPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
