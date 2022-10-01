// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHCLASSICLINKVPCREQUEST_H
#define QTAWS_ATTACHCLASSICLINKVPCREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AttachClassicLinkVpcRequestPrivate;

class QTAWSEC2_EXPORT AttachClassicLinkVpcRequest : public Ec2Request {

public:
    AttachClassicLinkVpcRequest(const AttachClassicLinkVpcRequest &other);
    AttachClassicLinkVpcRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachClassicLinkVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
