// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEADDRESSREQUEST_H
#define QTAWS_ASSOCIATEADDRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AssociateAddressRequestPrivate;

class QTAWSEC2_EXPORT AssociateAddressRequest : public Ec2Request {

public:
    AssociateAddressRequest(const AssociateAddressRequest &other);
    AssociateAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateAddressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
