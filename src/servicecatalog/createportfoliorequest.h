// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPORTFOLIOREQUEST_H
#define QTAWS_CREATEPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class CreatePortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT CreatePortfolioRequest : public ServiceCatalogRequest {

public:
    CreatePortfolioRequest(const CreatePortfolioRequest &other);
    CreatePortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreatePortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
