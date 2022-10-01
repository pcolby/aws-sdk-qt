// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPARTNEREVENTSOURCEREQUEST_H
#define QTAWS_DELETEPARTNEREVENTSOURCEREQUEST_H

#include "eventbridgerequest.h"

namespace QtAws {
namespace EventBridge {

class DeletePartnerEventSourceRequestPrivate;

class QTAWSEVENTBRIDGE_EXPORT DeletePartnerEventSourceRequest : public EventBridgeRequest {

public:
    DeletePartnerEventSourceRequest(const DeletePartnerEventSourceRequest &other);
    DeletePartnerEventSourceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeletePartnerEventSourceRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
