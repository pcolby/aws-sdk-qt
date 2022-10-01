// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTRANSITGATEWAYPREFIXLISTREFERENCESREQUEST_H
#define QTAWS_GETTRANSITGATEWAYPREFIXLISTREFERENCESREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class GetTransitGatewayPrefixListReferencesRequestPrivate;

class QTAWSEC2_EXPORT GetTransitGatewayPrefixListReferencesRequest : public Ec2Request {

public:
    GetTransitGatewayPrefixListReferencesRequest(const GetTransitGatewayPrefixListReferencesRequest &other);
    GetTransitGatewayPrefixListReferencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTransitGatewayPrefixListReferencesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
