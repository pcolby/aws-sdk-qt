// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESTREAMINGSESSIONREQUEST_H
#define QTAWS_DELETESTREAMINGSESSIONREQUEST_H

#include "nimblerequest.h"

namespace QtAws {
namespace Nimble {

class DeleteStreamingSessionRequestPrivate;

class QTAWSNIMBLE_EXPORT DeleteStreamingSessionRequest : public NimbleRequest {

public:
    DeleteStreamingSessionRequest(const DeleteStreamingSessionRequest &other);
    DeleteStreamingSessionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteStreamingSessionRequest)

};

} // namespace Nimble
} // namespace QtAws

#endif
