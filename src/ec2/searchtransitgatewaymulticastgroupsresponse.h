// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHTRANSITGATEWAYMULTICASTGROUPSRESPONSE_H
#define QTAWS_SEARCHTRANSITGATEWAYMULTICASTGROUPSRESPONSE_H

#include "ec2response.h"
#include "searchtransitgatewaymulticastgroupsrequest.h"

namespace QtAws {
namespace Ec2 {

class SearchTransitGatewayMulticastGroupsResponsePrivate;

class QTAWSEC2_EXPORT SearchTransitGatewayMulticastGroupsResponse : public Ec2Response {
    Q_OBJECT

public:
    SearchTransitGatewayMulticastGroupsResponse(const SearchTransitGatewayMulticastGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchTransitGatewayMulticastGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchTransitGatewayMulticastGroupsResponse)
    Q_DISABLE_COPY(SearchTransitGatewayMulticastGroupsResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
