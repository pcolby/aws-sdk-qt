// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOACCESSREQUEST_H
#define QTAWS_LISTPORTFOLIOACCESSREQUEST_H

#include "servicecatalogrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfolioAccessRequestPrivate;

class QTAWSSERVICECATALOG_EXPORT ListPortfolioAccessRequest : public ServiceCatalogRequest {

public:
    ListPortfolioAccessRequest(const ListPortfolioAccessRequest &other);
    ListPortfolioAccessRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListPortfolioAccessRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
