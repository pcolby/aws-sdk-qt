// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBACKENDAUTHRESPONSE_H
#define QTAWS_GETBACKENDAUTHRESPONSE_H

#include "amplifybackendresponse.h"
#include "getbackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetBackendAuthResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetBackendAuthResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    GetBackendAuthResponse(const GetBackendAuthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetBackendAuthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetBackendAuthResponse)
    Q_DISABLE_COPY(GetBackendAuthResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
