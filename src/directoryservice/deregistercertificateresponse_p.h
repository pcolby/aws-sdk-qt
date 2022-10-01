// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCERTIFICATERESPONSE_P_H
#define QTAWS_DEREGISTERCERTIFICATERESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class DeregisterCertificateResponse;

class DeregisterCertificateResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit DeregisterCertificateResponsePrivate(DeregisterCertificateResponse * const q);

    void parseDeregisterCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterCertificateResponse)
    Q_DISABLE_COPY(DeregisterCertificateResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
