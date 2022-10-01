// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVPNCONNECTIONSRESPONSE_H
#define QTAWS_DESCRIBEVPNCONNECTIONSRESPONSE_H

#include "ec2response.h"
#include "describevpnconnectionsrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeVpnConnectionsResponsePrivate;

class QTAWSEC2_EXPORT DescribeVpnConnectionsResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeVpnConnectionsResponse(const DescribeVpnConnectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeVpnConnectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVpnConnectionsResponse)
    Q_DISABLE_COPY(DescribeVpnConnectionsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
