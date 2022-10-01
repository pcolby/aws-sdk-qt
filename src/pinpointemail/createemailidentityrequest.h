// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEMAILIDENTITYREQUEST_H
#define QTAWS_CREATEEMAILIDENTITYREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateEmailIdentityRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT CreateEmailIdentityRequest : public PinpointEmailRequest {

public:
    CreateEmailIdentityRequest(const CreateEmailIdentityRequest &other);
    CreateEmailIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEmailIdentityRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
