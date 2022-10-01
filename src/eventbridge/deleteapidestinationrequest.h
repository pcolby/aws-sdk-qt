// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPIDESTINATIONREQUEST_H
#define QTAWS_DELETEAPIDESTINATIONREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DeleteApiDestinationRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DeleteApiDestinationRequest : public EventBridgeRequest {

public:
    DeleteApiDestinationRequest(const DeleteApiDestinationRequest &other);
    DeleteApiDestinationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteApiDestinationRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
