// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIGNINGCERTIFICATERESPONSE_P_H
#define QTAWS_UPDATESIGNINGCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UpdateSigningCertificateResponse;

class UpdateSigningCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit UpdateSigningCertificateResponsePrivate(UpdateSigningCertificateResponse * const q);

    void parseUpdateSigningCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSigningCertificateResponse)
    Q_DISABLE_COPY(UpdateSigningCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
