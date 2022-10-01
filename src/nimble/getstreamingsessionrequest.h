// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSTREAMINGSESSIONREQUEST_H
#define QTAWS_GETSTREAMINGSESSIONREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class GetStreamingSessionRequestPrivate;

class QTAWSNIMBLE_EXPORT GetStreamingSessionRequest : public NimbleRequest {

public:
    GetStreamingSessionRequest(const GetStreamingSessionRequest &other);
    GetStreamingSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
