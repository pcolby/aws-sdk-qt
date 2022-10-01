// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERENDPOINTSREQUEST_H
#define QTAWS_DELETEUSERENDPOINTSREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteUserEndpointsRequestPrivate;

class QTAWSPINPOINT_EXPORT DeleteUserEndpointsRequest : public PinpointRequest {

public:
    DeleteUserEndpointsRequest(const DeleteUserEndpointsRequest &other);
    DeleteUserEndpointsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteUserEndpointsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
