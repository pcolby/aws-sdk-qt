// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEVPCCIDRBLOCKREQUEST_H
#define QTAWS_ASSOCIATEVPCCIDRBLOCKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateVpcCidrBlockRequestPrivate;

class QTAWSEC2_EXPORT AssociateVpcCidrBlockRequest : public Ec2Request {

public:
    AssociateVpcCidrBlockRequest(const AssociateVpcCidrBlockRequest &other);
    AssociateVpcCidrBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateVpcCidrBlockRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
