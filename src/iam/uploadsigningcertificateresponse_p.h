// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSIGNINGCERTIFICATERESPONSE_P_H
#define QTAWS_UPLOADSIGNINGCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UploadSigningCertificateResponse;

class UploadSigningCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit UploadSigningCertificateResponsePrivate(UploadSigningCertificateResponse * const q);

    void parseUploadSigningCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadSigningCertificateResponse)
    Q_DISABLE_COPY(UploadSigningCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
