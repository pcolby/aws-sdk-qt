// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCATTRIBUTEREQUEST_H
#define QTAWS_MODIFYVPCATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcAttributeRequestPrivate;

class QTAWSEC2_EXPORT ModifyVpcAttributeRequest : public Ec2Request {

public:
    ModifyVpcAttributeRequest(const ModifyVpcAttributeRequest &other);
    ModifyVpcAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
