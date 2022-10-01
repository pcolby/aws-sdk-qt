// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNCONNECTIONSRESPONSE_H
#define QTAWS_DESCRIBECLIENTVPNCONNECTIONSRESPONSE_H

#include "ec2response.h"
#include "describeclientvpnconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnConnectionsResponsePrivate;

class QTAWSEC2_EXPORT DescribeClientVpnConnectionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeClientVpnConnectionsResponse(const DescribeClientVpnConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClientVpnConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnConnectionsResponse)
    Q_DISABLE_COPY(DescribeClientVpnConnectionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
