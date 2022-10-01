// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHCLASSICLINKVPCREQUEST_H
#define QTAWS_DETACHCLASSICLINKVPCREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DetachClassicLinkVpcRequestPrivate;

class QTAWSEC2_EXPORT DetachClassicLinkVpcRequest : public Ec2Request {

public:
    DetachClassicLinkVpcRequest(const DetachClassicLinkVpcRequest &other);
    DetachClassicLinkVpcRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachClassicLinkVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
