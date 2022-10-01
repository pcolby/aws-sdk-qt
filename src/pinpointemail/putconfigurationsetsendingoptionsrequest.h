// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSREQUEST_H
#define QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetSendingOptionsRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT PutConfigurationSetSendingOptionsRequest : public PinpointEmailRequest {

public:
    PutConfigurationSetSendingOptionsRequest(const PutConfigurationSetSendingOptionsRequest &other);
    PutConfigurationSetSendingOptionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutConfigurationSetSendingOptionsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
