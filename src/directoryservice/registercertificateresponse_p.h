// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCERTIFICATERESPONSE_P_H
#define QTAWS_REGISTERCERTIFICATERESPONSE_P_H

#include "directoryserviceresponse_p.h"

namespace QtAws {
namespace DirectoryService {

class RegisterCertificateResponse;

class RegisterCertificateResponsePrivate : public DirectoryServiceResponsePrivate {

public:

    explicit RegisterCertificateResponsePrivate(RegisterCertificateResponse * const q);

    void parseRegisterCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterCertificateResponse)
    Q_DISABLE_COPY(RegisterCertificateResponsePrivate)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
