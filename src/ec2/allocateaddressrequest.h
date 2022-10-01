// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ALLOCATEADDRESSREQUEST_H
#define QTAWS_ALLOCATEADDRESSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AllocateAddressRequestPrivate;

class QTAWSEC2_EXPORT AllocateAddressRequest : public Ec2Request {

public:
    AllocateAddressRequest(const AllocateAddressRequest &other);
    AllocateAddressRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AllocateAddressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
