// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESECURITYGROUPREQUEST_H
#define QTAWS_DELETESECURITYGROUPREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteSecurityGroupRequestPrivate;

class QTAWSEC2_EXPORT DeleteSecurityGroupRequest : public Ec2Request {

public:
    DeleteSecurityGroupRequest(const DeleteSecurityGroupRequest &other);
    DeleteSecurityGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSecurityGroupRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
