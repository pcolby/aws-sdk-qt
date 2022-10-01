// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEDICATEDIPPOOLREQUEST_H
#define QTAWS_DELETEDEDICATEDIPPOOLREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteDedicatedIpPoolRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT DeleteDedicatedIpPoolRequest : public PinpointEmailRequest {

public:
    DeleteDedicatedIpPoolRequest(const DeleteDedicatedIpPoolRequest &other);
    DeleteDedicatedIpPoolRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteDedicatedIpPoolRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
