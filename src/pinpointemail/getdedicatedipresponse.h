// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPRESPONSE_H
#define QTAWS_GETDEDICATEDIPRESPONSE_H

#include "pinpointemailresponse.h"
#include "getdedicatediprequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDedicatedIpResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDedicatedIpResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    GetDedicatedIpResponse(const GetDedicatedIpRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDedicatedIpRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDedicatedIpResponse)
    Q_DISABLE_COPY(GetDedicatedIpResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
