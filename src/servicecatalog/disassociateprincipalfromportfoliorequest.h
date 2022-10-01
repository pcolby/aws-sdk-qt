// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEPRINCIPALFROMPORTFOLIOREQUEST_H
#define QTAWS_DISASSOCIATEPRINCIPALFROMPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DisassociatePrincipalFromPortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DisassociatePrincipalFromPortfolioRequest : public ServiceCatalogRequest {

public:
    DisassociatePrincipalFromPortfolioRequest(const DisassociatePrincipalFromPortfolioRequest &other);
    DisassociatePrincipalFromPortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociatePrincipalFromPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
