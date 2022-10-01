// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTPORTFOLIOSHAREREQUEST_H
#define QTAWS_ACCEPTPORTFOLIOSHAREREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class AcceptPortfolioShareRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT AcceptPortfolioShareRequest : public ServiceCatalogRequest {

public:
    AcceptPortfolioShareRequest(const AcceptPortfolioShareRequest &other);
    AcceptPortfolioShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptPortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
