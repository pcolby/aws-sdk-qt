// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATEEVENTSOURCEREQUEST_H
#define QTAWS_ACTIVATEEVENTSOURCEREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class ActivateEventSourceRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT ActivateEventSourceRequest : public EventBridgeRequest {

public:
    ActivateEventSourceRequest(const ActivateEventSourceRequest &other);
    ActivateEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ActivateEventSourceRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
