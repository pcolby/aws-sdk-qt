// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDACTCHANNELMESSAGEREQUEST_H
#define QTAWS_REDACTCHANNELMESSAGEREQUEST_H

#include "chimesdkmessagingrequest.h"

namespace QtAws {
namespace ChimeSdkMessaging {

class RedactChannelMessageRequestPrivate;

class QTAWSCHIMESDKMESSAGING_EXPORT RedactChannelMessageRequest : public ChimeSdkMessagingRequest {

public:
    RedactChannelMessageRequest(const RedactChannelMessageRequest &other);
    RedactChannelMessageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedactChannelMessageRequest)

};

} // namespace ChimeSdkMessaging
} // namespace QtAws

#endif
