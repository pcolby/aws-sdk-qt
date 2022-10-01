// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEMAILREQUEST_H
#define QTAWS_SENDEMAILREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class SendEmailRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT SendEmailRequest : public PinpointEmailRequest {

public:
    SendEmailRequest(const SendEmailRequest &other);
    SendEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendEmailRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
