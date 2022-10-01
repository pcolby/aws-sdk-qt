// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEFLOWVPCINTERFACEREQUEST_H
#define QTAWS_REMOVEFLOWVPCINTERFACEREQUEST_H

#include "mediaconnectrequest.h"

namespace QtAws {
namespace MediaConnect {

class RemoveFlowVpcInterfaceRequestPrivate;

class QTAWSMEDIACONNECT_EXPORT RemoveFlowVpcInterfaceRequest : public MediaConnectRequest {

public:
    RemoveFlowVpcInterfaceRequest(const RemoveFlowVpcInterfaceRequest &other);
    RemoveFlowVpcInterfaceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RemoveFlowVpcInterfaceRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
