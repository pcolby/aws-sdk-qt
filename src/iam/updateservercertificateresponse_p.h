// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVERCERTIFICATERESPONSE_P_H
#define QTAWS_UPDATESERVERCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateServerCertificateResponse;

class UpdateServerCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateServerCertificateResponsePrivate(UpdateServerCertificateResponse * const q);

    void parseUpdateServerCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServerCertificateResponse)
    Q_DISABLE_COPY(UpdateServerCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
