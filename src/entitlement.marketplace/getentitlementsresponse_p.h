/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETENTITLEMENTSRESPONSE_P_H
#define QTAWS_GETENTITLEMENTSRESPONSE_P_H

#include "marketplaceentitlementserviceresponse.h"
#include "getentitlementsrequest.h"

namespace QtAws {
namespace MarketplaceEntitlementService {

class GetEntitlementsResponse;

class QTAWS_EXPORT GetEntitlementsResponsePrivate : public MarketplaceEntitlementServiceResponsePrivate {
    Q_OBJECT

public:

    GetEntitlementsResponsePrivate(GetEntitlementsResponse * const q);

    void parseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEntitlementsResponse)
    Q_DISABLE_COPY(GetEntitlementsResponsePrivate)

};

} // namespace MarketplaceEntitlementService
} // namespace QtAws

#endif
