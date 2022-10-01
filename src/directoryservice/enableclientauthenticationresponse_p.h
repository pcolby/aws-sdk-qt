// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLECLIENTAUTHENTICATIONRESPONSE_P_H
#define QTAWS_ENABLECLIENTAUTHENTICATIONRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class EnableClientAuthenticationResponse;

class EnableClientAuthenticationResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit EnableClientAuthenticationResponsePrivate(EnableClientAuthenticationResponse * const q);

    void parseEnableClientAuthenticationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableClientAuthenticationResponse)
    Q_DISABLE_COPY(EnableClientAuthenticationResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
