// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYPRIVATEDNSNAMEOPTIONSREQUEST_H
#define QTAWS_MODIFYPRIVATEDNSNAMEOPTIONSREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyPrivateDnsNameOptionsRequestPrivate;

class QTAWSEC2_EXPORT ModifyPrivateDnsNameOptionsRequest : public Ec2Request {

public:
    ModifyPrivateDnsNameOptionsRequest(const ModifyPrivateDnsNameOptionsRequest &other);
    ModifyPrivateDnsNameOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyPrivateDnsNameOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
