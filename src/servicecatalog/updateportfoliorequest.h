// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTFOLIOREQUEST_H
#define QTAWS_UPDATEPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT UpdatePortfolioRequest : public ServiceCatalogRequest {

public:
    UpdatePortfolioRequest(const UpdatePortfolioRequest &other);
    UpdatePortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
