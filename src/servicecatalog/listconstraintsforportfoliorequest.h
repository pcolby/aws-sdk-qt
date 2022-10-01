// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONSTRAINTSFORPORTFOLIOREQUEST_H
#define QTAWS_LISTCONSTRAINTSFORPORTFOLIOREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListConstraintsForPortfolioRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListConstraintsForPortfolioRequest : public ServiceCatalogRequest {

public:
    ListConstraintsForPortfolioRequest(const ListConstraintsForPortfolioRequest &other);
    ListConstraintsForPortfolioRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListConstraintsForPortfolioRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
