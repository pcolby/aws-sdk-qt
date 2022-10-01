// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINAPPMESSAGESREQUEST_H
#define QTAWS_GETINAPPMESSAGESREQUEST_H

#include "pinpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetInAppMessagesRequestPrivate;

class QTAWSPINPOINT_EXPORT GetInAppMessagesRequest : public PinpointRequest {

public:
    GetInAppMessagesRequest(const GetInAppMessagesRequest &other);
    GetInAppMessagesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetInAppMessagesRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
