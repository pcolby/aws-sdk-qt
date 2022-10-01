// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENDPOINTAUTHORIZATIONREQUEST_H
#define QTAWS_DESCRIBEENDPOINTAUTHORIZATIONREQUEST_H

#include "redshiftrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEndpointAuthorizationRequestPrivate;

class QTAWSREDSHIFT_EXPORT DescribeEndpointAuthorizationRequest : public RedshiftRequest {

public:
    DescribeEndpointAuthorizationRequest(const DescribeEndpointAuthorizationRequest &other);
    DescribeEndpointAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeEndpointAuthorizationRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
