// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPSREQUEST_H
#define QTAWS_GETDEDICATEDIPSREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDedicatedIpsRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDedicatedIpsRequest : public PinpointEmailRequest {

public:
    GetDedicatedIpsRequest(const GetDedicatedIpsRequest &other);
    GetDedicatedIpsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDedicatedIpsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
