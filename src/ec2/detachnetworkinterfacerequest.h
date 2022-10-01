// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHNETWORKINTERFACEREQUEST_H
#define QTAWS_DETACHNETWORKINTERFACEREQUEST_H

#include "ec2request.h"

namespace QtAws {
namespace Ec2 {

class DetachNetworkInterfaceRequestPrivate;

class QTAWSEC2_EXPORT DetachNetworkInterfaceRequest : public Ec2Request {

public:
    DetachNetworkInterfaceRequest(const DetachNetworkInterfaceRequest &other);
    DetachNetworkInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachNetworkInterfaceRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
