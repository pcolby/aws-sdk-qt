// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKACLREQUEST_H
#define QTAWS_CREATENETWORKACLREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkAclRequestPrivate;

class QTAWSEC2_EXPORT CreateNetworkAclRequest : public Ec2Request {

public:
    CreateNetworkAclRequest(const CreateNetworkAclRequest &other);
    CreateNetworkAclRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkAclRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
