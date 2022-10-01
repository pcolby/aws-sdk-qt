// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSREQUEST_H
#define QTAWS_PUTEVENTSREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class PutEventsRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT PutEventsRequest : public EventBridgeRequest {

public:
    PutEventsRequest(const PutEventsRequest &other);
    PutEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutEventsRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
