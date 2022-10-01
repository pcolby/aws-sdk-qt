// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETOKENRESPONSE_H
#define QTAWS_CREATETOKENRESPONSE_H

#include "amplifybackendresponse.h"
#include "createtokenrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateTokenResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateTokenResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    CreateTokenResponse(const CreateTokenRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateTokenRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateTokenResponse)
    Q_DISABLE_COPY(CreateTokenResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
