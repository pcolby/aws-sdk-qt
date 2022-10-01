// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLECLIENTAUTHENTICATIONRESPONSE_P_H
#define QTAWS_DISABLECLIENTAUTHENTICATIONRESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DisableClientAuthenticationResponse;

class DisableClientAuthenticationResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DisableClientAuthenticationResponsePrivate(DisableClientAuthenticationResponse * const q);

    void parseDisableClientAuthenticationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableClientAuthenticationResponse)
    Q_DISABLE_COPY(DisableClientAuthenticationResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
