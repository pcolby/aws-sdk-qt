// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATESUBNETCIDRBLOCKREQUEST_H
#define QTAWS_DISASSOCIATESUBNETCIDRBLOCKREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateSubnetCidrBlockRequestPrivate;

class QTAWSEC2_EXPORT DisassociateSubnetCidrBlockRequest : public Ec2Request {

public:
    DisassociateSubnetCidrBlockRequest(const DisassociateSubnetCidrBlockRequest &other);
    DisassociateSubnetCidrBlockRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateSubnetCidrBlockRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
