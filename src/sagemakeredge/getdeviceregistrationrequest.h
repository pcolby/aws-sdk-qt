// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEREGISTRATIONREQUEST_H
#define QTAWS_GETDEVICEREGISTRATIONREQUEST_H

#include "sagemakeredgerequest.h"

namespace QtAws {
namespace SagemakerEdge {

class GetDeviceRegistrationRequestPrivate;

class QTAWSSAGEMAKEREDGE_EXPORT GetDeviceRegistrationRequest : public SagemakerEdgeRequest {

public:
    GetDeviceRegistrationRequest(const GetDeviceRegistrationRequest &other);
    GetDeviceRegistrationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceRegistrationRequest)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
