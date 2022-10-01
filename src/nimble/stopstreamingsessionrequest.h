// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPSTREAMINGSESSIONREQUEST_H
#define QTAWS_STOPSTREAMINGSESSIONREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class StopStreamingSessionRequestPrivate;

class QTAWSNIMBLE_EXPORT StopStreamingSessionRequest : public NimbleRequest {

public:
    StopStreamingSessionRequest(const StopStreamingSessionRequest &other);
    StopStreamingSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
