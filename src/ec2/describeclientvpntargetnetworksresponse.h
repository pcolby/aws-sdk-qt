// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNTARGETNETWORKSRESPONSE_H
#define QTAWS_DESCRIBECLIENTVPNTARGETNETWORKSRESPONSE_H

#include "ec2response.h"
#include "describeclientvpntargetnetworksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnTargetNetworksResponsePrivate;

class QTAWSEC2_EXPORT DescribeClientVpnTargetNetworksResponse : public Ec2Response {
    Q_OBJECT

public:
    DescribeClientVpnTargetNetworksResponse(const DescribeClientVpnTargetNetworksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeClientVpnTargetNetworksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeClientVpnTargetNetworksResponse)
    Q_DISABLE_COPY(DescribeClientVpnTargetNetworksResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
