// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSUBNETATTRIBUTEREQUEST_H
#define QTAWS_MODIFYSUBNETATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifySubnetAttributeRequestPrivate;

class QTAWSEC2_EXPORT ModifySubnetAttributeRequest : public Ec2Request {

public:
    ModifySubnetAttributeRequest(const ModifySubnetAttributeRequest &other);
    ModifySubnetAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifySubnetAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
