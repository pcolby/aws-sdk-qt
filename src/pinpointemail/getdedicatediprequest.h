// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPREQUEST_H
#define QTAWS_GETDEDICATEDIPREQUEST_H

#include "pinpointemailrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDedicatedIpRequestPrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDedicatedIpRequest : public PinpointEmailRequest {

public:
    GetDedicatedIpRequest(const GetDedicatedIpRequest &other);
    GetDedicatedIpRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDedicatedIpRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
