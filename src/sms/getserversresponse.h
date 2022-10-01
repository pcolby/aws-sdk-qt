// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERSRESPONSE_H
#define QTAWS_GETSERVERSRESPONSE_H

#include "smsresponse.h"
#include "getserversrequest.h"

namespace QtAws {
namespace Sms {

class GetServersResponsePrivate;

class QTAWSSMS_EXPORT GetServersResponse : public SmsResponse {
    Q_OBJECT

public:
    GetServersResponse(const GetServersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServersResponse)
    Q_DISABLE_COPY(GetServersResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
