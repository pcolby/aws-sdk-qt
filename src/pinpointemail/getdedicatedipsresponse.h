// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEDICATEDIPSRESPONSE_H
#define QTAWS_GETDEDICATEDIPSRESPONSE_H

#include "pinpointemailresponse.h"
#include "getdedicatedipsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetDedicatedIpsResponsePrivate;

class QTAWSPINPOINTEMAIL_EXPORT GetDedicatedIpsResponse : public PinpointEmailResponse {
    Q_OBJECT

public:
    GetDedicatedIpsResponse(const GetDedicatedIpsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDedicatedIpsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDedicatedIpsResponse)
    Q_DISABLE_COPY(GetDedicatedIpsResponse)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
