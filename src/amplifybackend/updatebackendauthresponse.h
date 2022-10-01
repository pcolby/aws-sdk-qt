// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEBACKENDAUTHRESPONSE_H
#define QTAWS_UPDATEBACKENDAUTHRESPONSE_H

#include "amplifybackendresponse.h"
#include "updatebackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class UpdateBackendAuthResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT UpdateBackendAuthResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    UpdateBackendAuthResponse(const UpdateBackendAuthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateBackendAuthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateBackendAuthResponse)
    Q_DISABLE_COPY(UpdateBackendAuthResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
