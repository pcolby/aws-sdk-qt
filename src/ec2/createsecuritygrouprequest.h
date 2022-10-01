// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESECURITYGROUPREQUEST_H
#define QTAWS_CREATESECURITYGROUPREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateSecurityGroupRequestPrivate;

class QTAWSEC2_EXPORT CreateSecurityGroupRequest : public Ec2Request {

public:
    CreateSecurityGroupRequest(const CreateSecurityGroupRequest &other);
    CreateSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSecurityGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
