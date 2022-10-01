// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERSREQUEST_H
#define QTAWS_GETSERVERSREQUEST_H

#include "smsrequest.h"

namespace QtAws {
namespace Sms {

class GetServersRequestPrivate;

class QTAWSSMS_EXPORT GetServersRequest : public SmsRequest {

public:
    GetServersRequest(const GetServersRequest &other);
    GetServersRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServersRequest)

};

} // namespace Sms
} // namespace QtAws

#endif
