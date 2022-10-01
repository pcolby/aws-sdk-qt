// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPORTFOLIOSHAREREQUEST_H
#define QTAWS_UPDATEPORTFOLIOSHAREREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class UpdatePortfolioShareRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT UpdatePortfolioShareRequest : public ServiceCatalogRequest {

public:
    UpdatePortfolioShareRequest(const UpdatePortfolioShareRequest &other);
    UpdatePortfolioShareRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdatePortfolioShareRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
