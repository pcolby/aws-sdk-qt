// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSIGNIPV6ADDRESSESRESPONSE_H
#define QTAWS_ASSIGNIPV6ADDRESSESRESPONSE_H

#include "ec2response.h"
#include "assignipv6addressesrequest.h"

namespace QtAws {
namespace Ec2 {

class AssignIpv6AddressesResponsePrivate;

class QTAWSEC2_EXPORT AssignIpv6AddressesResponse : public Ec2Response {
    Q_OBJECT

public:
    AssignIpv6AddressesResponse(const AssignIpv6AddressesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssignIpv6AddressesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssignIpv6AddressesResponse)
    Q_DISABLE_COPY(AssignIpv6AddressesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
