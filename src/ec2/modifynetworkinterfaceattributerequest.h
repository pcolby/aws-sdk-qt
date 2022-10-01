// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H
#define QTAWS_MODIFYNETWORKINTERFACEATTRIBUTEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class ModifyNetworkInterfaceAttributeRequestPrivate;

class QTAWSEC2_EXPORT ModifyNetworkInterfaceAttributeRequest : public Ec2Request {

public:
    ModifyNetworkInterfaceAttributeRequest(const ModifyNetworkInterfaceAttributeRequest &other);
    ModifyNetworkInterfaceAttributeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyNetworkInterfaceAttributeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
