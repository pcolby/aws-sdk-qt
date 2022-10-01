// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEADDRESSTOVPCREQUEST_H
#define QTAWS_MOVEADDRESSTOVPCREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class MoveAddressToVpcRequestPrivate;

class QTAWSEC2_EXPORT MoveAddressToVpcRequest : public Ec2Request {

public:
    MoveAddressToVpcRequest(const MoveAddressToVpcRequest &other);
    MoveAddressToVpcRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MoveAddressToVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
