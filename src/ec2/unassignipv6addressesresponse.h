// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNASSIGNIPV6ADDRESSESRESPONSE_H
#define QTAWS_UNASSIGNIPV6ADDRESSESRESPONSE_H

#include "ec2response.h"
#include "unassignipv6addressesrequest.h"

namespace QtAws {
namespace Ec2 {

class UnassignIpv6AddressesResponsePrivate;

class QTAWSEC2_EXPORT UnassignIpv6AddressesResponse : public Ec2Response {
    Q_OBJECT

public:
    UnassignIpv6AddressesResponse(const UnassignIpv6AddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnassignIpv6AddressesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnassignIpv6AddressesResponse)
    Q_DISABLE_COPY(UnassignIpv6AddressesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
