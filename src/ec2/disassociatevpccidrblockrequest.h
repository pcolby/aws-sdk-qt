// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEVPCCIDRBLOCKREQUEST_H
#define QTAWS_DISASSOCIATEVPCCIDRBLOCKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateVpcCidrBlockRequestPrivate;

class QTAWSEC2_EXPORT DisassociateVpcCidrBlockRequest : public Ec2Request {

public:
    DisassociateVpcCidrBlockRequest(const DisassociateVpcCidrBlockRequest &other);
    DisassociateVpcCidrBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateVpcCidrBlockRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
