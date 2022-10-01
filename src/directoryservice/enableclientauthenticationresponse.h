// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECLIENTAUTHENTICATIONRESPONSE_H
#define QTAWS_ENABLECLIENTAUTHENTICATIONRESPONSE_H

#include "directoryserviceresponse.h"
#include "enableclientauthenticationrequest.h"

namespace QtAws {
namespace DirectoryService {

class EnableClientAuthenticationResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT EnableClientAuthenticationResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    EnableClientAuthenticationResponse(const EnableClientAuthenticationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const EnableClientAuthenticationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(EnableClientAuthenticationResponse)
    Q_DISABLE_COPY(EnableClientAuthenticationResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
