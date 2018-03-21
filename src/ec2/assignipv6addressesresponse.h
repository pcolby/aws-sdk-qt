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

#ifndef QTAWS_ASSIGNIPV6ADDRESSESRESPONSE_H
#define QTAWS_ASSIGNIPV6ADDRESSESRESPONSE_H

#include "ec2response.h"
#include "assignipv6addressesrequest.h"

namespace AWS {

namespace ec2 {

class AssignIpv6AddressesResponsePrivate;

class QTAWS_EXPORT AssignIpv6AddressesResponse : public AssignIpv6AddressesResponse {
    Q_OBJECT

public:
    AssignIpv6AddressesResponse(const AssignIpv6AddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssignIpv6AddressesRequest * request() const;

protected slots:
    virtual void parseSuccess(QIODevice &response);

private:
    Q_DECLARE_PRIVATE(AssignIpv6AddressesResponse)
    Q_DISABLE_COPY(AssignIpv6AddressesResponse)

};

} // namespace ec2
} // namespace AWS

#endif
