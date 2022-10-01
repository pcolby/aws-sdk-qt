// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCREQUEST_H
#define QTAWS_CREATEVPCREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcRequestPrivate;

class QTAWSEC2_EXPORT CreateVpcRequest : public Ec2Request {

public:
    CreateVpcRequest(const CreateVpcRequest &other);
    CreateVpcRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
