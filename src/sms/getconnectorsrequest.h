// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORSREQUEST_H
#define QTAWS_GETCONNECTORSREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class GetConnectorsRequestPrivate;

class QTAWSSMS_EXPORT GetConnectorsRequest : public SmsRequest {

public:
    GetConnectorsRequest(const GetConnectorsRequest &other);
    GetConnectorsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectorsRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
