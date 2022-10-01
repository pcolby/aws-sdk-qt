// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKINTERFACEREQUEST_H
#define QTAWS_CREATENETWORKINTERFACEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class CreateNetworkInterfaceRequestPrivate;

class QTAWSEC2_EXPORT CreateNetworkInterfaceRequest : public Ec2Request {

public:
    CreateNetworkInterfaceRequest(const CreateNetworkInterfaceRequest &other);
    CreateNetworkInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
