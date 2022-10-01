// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETTOKENRESPONSE_H
#define QTAWS_GETTOKENRESPONSE_H

#include "amplifybackendresponse.h"
#include "gettokenrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class GetTokenResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT GetTokenResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    GetTokenResponse(const GetTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetTokenResponse)
    Q_DISABLE_COPY(GetTokenResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
