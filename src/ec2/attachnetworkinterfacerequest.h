// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHNETWORKINTERFACEREQUEST_H
#define QTAWS_ATTACHNETWORKINTERFACEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class AttachNetworkInterfaceRequestPrivate;

class QTAWSEC2_EXPORT AttachNetworkInterfaceRequest : public Ec2Request {

public:
    AttachNetworkInterfaceRequest(const AttachNetworkInterfaceRequest &other);
    AttachNetworkInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachNetworkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
