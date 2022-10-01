// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEBACKENDAUTHRESPONSE_H
#define QTAWS_DELETEBACKENDAUTHRESPONSE_H

#include "amplifybackendresponse.h"
#include "deletebackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class DeleteBackendAuthResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT DeleteBackendAuthResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    DeleteBackendAuthResponse(const DeleteBackendAuthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteBackendAuthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteBackendAuthResponse)
    Q_DISABLE_COPY(DeleteBackendAuthResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
