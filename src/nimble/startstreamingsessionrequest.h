// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTSTREAMINGSESSIONREQUEST_H
#define QTAWS_STARTSTREAMINGSESSIONREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class StartStreamingSessionRequestPrivate;

class QTAWSNIMBLE_EXPORT StartStreamingSessionRequest : public NimbleRequest {

public:
    StartStreamingSessionRequest(const StartStreamingSessionRequest &other);
    StartStreamingSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
