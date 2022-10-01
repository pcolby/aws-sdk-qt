// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REPLACEROUTETABLEASSOCIATIONREQUEST_H
#define QTAWS_REPLACEROUTETABLEASSOCIATIONREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ReplaceRouteTableAssociationRequestPrivate;

class QTAWSEC2_EXPORT ReplaceRouteTableAssociationRequest : public Ec2Request {

public:
    ReplaceRouteTableAssociationRequest(const ReplaceRouteTableAssociationRequest &other);
    ReplaceRouteTableAssociationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ReplaceRouteTableAssociationRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
