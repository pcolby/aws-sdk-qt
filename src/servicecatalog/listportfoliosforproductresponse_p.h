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

#ifndef QTAWS_LISTPORTFOLIOSFORPRODUCTRESPONSE_P_H
#define QTAWS_LISTPORTFOLIOSFORPRODUCTRESPONSE_P_H

#include "servicecatalogresponse.h"
#include "listportfoliosforproductrequest.h"

namespace AWS {

namespace ServiceCatalog {

class ListPortfoliosForProductResponse;

class QTAWS_EXPORT ListPortfoliosForProductResponsePrivate : public ServiceCatalogResponsePrivate {
    Q_OBJECT

public:

    ListPortfoliosForProductResponsePrivate(ListPortfoliosForProductResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPortfoliosForProductResponse)
    Q_DISABLE_COPY(ListPortfoliosForProductResponsePrivate)

};

} // namespace ServiceCatalog
} // namespace AWS

#endif
