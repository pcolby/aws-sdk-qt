// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYVPCTENANCYREQUEST_H
#define QTAWS_MODIFYVPCTENANCYREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyVpcTenancyRequestPrivate;

class QTAWSEC2_EXPORT ModifyVpcTenancyRequest : public Ec2Request {

public:
    ModifyVpcTenancyRequest(const ModifyVpcTenancyRequest &other);
    ModifyVpcTenancyRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyVpcTenancyRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
