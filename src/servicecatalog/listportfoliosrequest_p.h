// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPORTFOLIOSREQUEST_P_H
#define QTAWS_LISTPORTFOLIOSREQUEST_P_H

#include "servicecatalogrequest_p.h"
#include "listportfoliosrequest.h"

namespace QtAws {
namespace ServiceCatalog {

class ListPortfoliosRequest;

class ListPortfoliosRequestPrivate : public ServiceCatalogRequestPrivate {

public:
    ListPortfoliosRequestPrivate(const ServiceCatalogRequest::Action action,
                                   ListPortfoliosRequest * const q);
    ListPortfoliosRequestPrivate(const ListPortfoliosRequestPrivate &other,
                                   ListPortfoliosRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListPortfoliosRequest)

};

} // namespace ServiceCatalog
} // namespace QtAws

#endif
