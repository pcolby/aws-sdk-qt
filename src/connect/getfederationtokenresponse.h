// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFEDERATIONTOKENRESPONSE_H
#define QTAWS_GETFEDERATIONTOKENRESPONSE_H

#include "connectresponse.h"
#include "getfederationtokenrequest.h"

namespace QtAws {
namespace Connect {

class GetFederationTokenResponsePrivate;

class QTAWSCONNECT_EXPORT GetFederationTokenResponse : public ConnectResponse {
    Q_OBJECT

public:
    GetFederationTokenResponse(const GetFederationTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetFederationTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetFederationTokenResponse)
    Q_DISABLE_COPY(GetFederationTokenResponse)

};

} // namespace Connect
} // namespace QtAws

#endif
