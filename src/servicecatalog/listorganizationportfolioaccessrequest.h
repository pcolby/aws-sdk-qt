// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORGANIZATIONPORTFOLIOACCESSREQUEST_H
#define QTAWS_LISTORGANIZATIONPORTFOLIOACCESSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListOrganizationPortfolioAccessRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListOrganizationPortfolioAccessRequest : public ServiceCatalogRequest {

public:
    ListOrganizationPortfolioAccessRequest(const ListOrganizationPortfolioAccessRequest &other);
    ListOrganizationPortfolioAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrganizationPortfolioAccessRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
