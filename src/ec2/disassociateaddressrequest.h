// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEADDRESSREQUEST_H
#define QTAWS_DISASSOCIATEADDRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DisassociateAddressRequestPrivate;

class QTAWSEC2_EXPORT DisassociateAddressRequest : public Ec2Request {

public:
    DisassociateAddressRequest(const DisassociateAddressRequest &other);
    DisassociateAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateAddressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
