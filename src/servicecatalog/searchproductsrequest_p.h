/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SEARCHPRODUCTSREQUEST_P_H
#define QTAWS_SEARCHPRODUCTSREQUEST_P_H

#include "servicecatalog_p.h"
#include "searchproductsrequest.h"

namespace AWS {

namespace ServiceCatalog {

class SearchProductsRequest;

class QTAWS_EXPORT SearchProductsRequestPrivate : public ServiceCatalogPrivate {

public:
    SearchProductsRequestPrivate(const ServiceCatalog::Action action,
                                   SearchProductsRequest * const q);
    SearchProductsRequestPrivate(const SearchProductsRequestPrivate &other,
                                   SearchProductsRequest * const q);

private:
    Q_DECLARE_PUBLIC(SearchProductsRequest)

};

} // namespace ServiceCatalog
} // namespace AWS

#endif
