// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILIDENTITYREQUEST_H
#define QTAWS_DELETEEMAILIDENTITYREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteEmailIdentityRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT DeleteEmailIdentityRequest : public PinpointEmailRequest {

public:
    DeleteEmailIdentityRequest(const DeleteEmailIdentityRequest &other);
    DeleteEmailIdentityRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEmailIdentityRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
