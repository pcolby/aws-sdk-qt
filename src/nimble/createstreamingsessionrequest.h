// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTREAMINGSESSIONREQUEST_H
#define QTAWS_CREATESTREAMINGSESSIONREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class CreateStreamingSessionRequestPrivate;

class QTAWSNIMBLE_EXPORT CreateStreamingSessionRequest : public NimbleRequest {

public:
    CreateStreamingSessionRequest(const CreateStreamingSessionRequest &other);
    CreateStreamingSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
