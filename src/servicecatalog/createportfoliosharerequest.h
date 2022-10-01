// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTFOLIOSHAREREQUEST_H
#define QTAWS_CREATEPORTFOLIOSHAREREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreatePortfolioShareRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT CreatePortfolioShareRequest : public ServiceCatalogRequest {

public:
    CreatePortfolioShareRequest(const CreatePortfolioShareRequest &other);
    CreatePortfolioShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
