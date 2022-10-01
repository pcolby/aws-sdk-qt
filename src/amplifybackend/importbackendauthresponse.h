// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTBACKENDAUTHRESPONSE_H
#define QTAWS_IMPORTBACKENDAUTHRESPONSE_H

#include "amplifybackendresponse.h"
#include "importbackendauthrequest.h"

namespace QtAws {
namespace AmplifyBackend {

class ImportBackendAuthResponsePrivate;

class QTAWSAMPLIFYBACKEND_EXPORT ImportBackendAuthResponse : public AmplifyBackendResponse {
    Q_OBJECT

public:
    ImportBackendAuthResponse(const ImportBackendAuthRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportBackendAuthRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportBackendAuthResponse)
    Q_DISABLE_COPY(ImportBackendAuthResponse)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
