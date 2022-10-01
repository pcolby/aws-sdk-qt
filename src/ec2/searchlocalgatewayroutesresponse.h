// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SEARCHLOCALGATEWAYROUTESRESPONSE_H
#define QTAWS_SEARCHLOCALGATEWAYROUTESRESPONSE_H

#include "ec2response.h"
#include "searchlocalgatewayroutesrequest.h"

namespace QtAws {
namespace Ec2 {

class SearchLocalGatewayRoutesResponsePrivate;

class QTAWSEC2_EXPORT SearchLocalGatewayRoutesResponse : public Ec2Response {
    Q_OBJECT

public:
    SearchLocalGatewayRoutesResponse(const SearchLocalGatewayRoutesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SearchLocalGatewayRoutesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SearchLocalGatewayRoutesResponse)
    Q_DISABLE_COPY(SearchLocalGatewayRoutesResponse)

};

} // namespace Ec2
} // namespace QtAws

#endif
