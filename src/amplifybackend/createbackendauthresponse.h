// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEBACKENDAUTHRESPONSE_H
#define QTAWS_CREATEBACKENDAUTHRESPONSE_H

#include "amplifybackendresponse.h"
#include "createbackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class CreateBackendAuthResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT CreateBackendAuthResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    CreateBackendAuthResponse(const CreateBackendAuthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateBackendAuthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateBackendAuthResponse)
    Q_DISABLE_COPY(CreateBackendAuthResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
