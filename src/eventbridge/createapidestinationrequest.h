// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIDESTINATIONREQUEST_H
#define QTAWS_CREATEAPIDESTINATIONREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class CreateApiDestinationRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT CreateApiDestinationRequest : public EventBridgeRequest {

public:
    CreateApiDestinationRequest(const CreateApiDestinationRequest &other);
    CreateApiDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateApiDestinationRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
