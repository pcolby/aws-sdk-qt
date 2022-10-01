// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEFAULTSUBNETREQUEST_H
#define QTAWS_CREATEDEFAULTSUBNETREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateDefaultSubnetRequestPrivate;

class QTAWSEC2_EXPORT CreateDefaultSubnetRequest : public Ec2Request {

public:
    CreateDefaultSubnetRequest(const CreateDefaultSubnetRequest &other);
    CreateDefaultSubnetRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDefaultSubnetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
