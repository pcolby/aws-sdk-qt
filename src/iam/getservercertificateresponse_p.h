// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERCERTIFICATERESPONSE_P_H
#define QTAWS_GETSERVERCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class GetServerCertificateResponse;

class GetServerCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit GetServerCertificateResponsePrivate(GetServerCertificateResponse * const q);

    void parseGetServerCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetServerCertificateResponse)
    Q_DISABLE_COPY(GetServerCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
