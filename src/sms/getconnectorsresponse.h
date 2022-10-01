// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTORSRESPONSE_H
#define QTAWS_GETCONNECTORSRESPONSE_H

#include "smsresponse.h"
#include "getconnectorsrequest.h"

namespace QtAws {
namespace Sms {

class GetConnectorsResponsePrivate;

class QTAWSSMS_EXPORT GetConnectorsResponse : public SmsResponse {
    Q_OBJECT

public:
    GetConnectorsResponse(const GetConnectorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConnectorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConnectorsResponse)
    Q_DISABLE_COPY(GetConnectorsResponse)

};

} // namespace Sms
} // namespace QtAws

#endif
