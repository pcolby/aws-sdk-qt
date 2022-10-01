// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMESSAGINGSESSIONENDPOINTREQUEST_H
#define QTAWS_GETMESSAGINGSESSIONENDPOINTREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetMessagingSessionEndpointRequestPrivate;

class QTAWSCHIME_EXPORT GetMessagingSessionEndpointRequest : public ChimeRequest {

public:
    GetMessagingSessionEndpointRequest(const GetMessagingSessionEndpointRequest &other);
    GetMessagingSessionEndpointRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetMessagingSessionEndpointRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
