// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTAUTHORIZATIONRESPONSE_H
#define QTAWS_DESCRIBEENDPOINTAUTHORIZATIONRESPONSE_H

#include "redshiftresponse.h"
#include "describeendpointauthorizationrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEndpointAuthorizationResponsePrivate;

class QTAWSREDSHIFT_EXPORT DescribeEndpointAuthorizationResponse : public RedshiftResponse {
    Q_OBJECT

public:
    DescribeEndpointAuthorizationResponse(const DescribeEndpointAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeEndpointAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointAuthorizationResponse)
    Q_DISABLE_COPY(DescribeEndpointAuthorizationResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
