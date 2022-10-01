// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELREPLAYREQUEST_H
#define QTAWS_CANCELREPLAYREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class CancelReplayRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT CancelReplayRequest : public EventBridgeRequest {

public:
    CancelReplayRequest(const CancelReplayRequest &other);
    CancelReplayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelReplayRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
