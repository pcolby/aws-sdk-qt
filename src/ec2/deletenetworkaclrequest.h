// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKACLREQUEST_H
#define QTAWS_DELETENETWORKACLREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DeleteNetworkAclRequestPrivate;

class QTAWSEC2_EXPORT DeleteNetworkAclRequest : public Ec2Request {

public:
    DeleteNetworkAclRequest(const DeleteNetworkAclRequest &other);
    DeleteNetworkAclRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNetworkAclRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
