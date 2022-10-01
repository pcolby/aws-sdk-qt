// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPORTFOLIOREQUEST_H
#define QTAWS_DELETEPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class DeletePortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT DeletePortfolioRequest : public ServiceCatalogRequest {

public:
    DeletePortfolioRequest(const DeletePortfolioRequest &other);
    DeletePortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
