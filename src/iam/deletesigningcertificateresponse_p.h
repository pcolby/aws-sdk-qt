// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIGNINGCERTIFICATERESPONSE_P_H
#define QTAWS_DELETESIGNINGCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteSigningCertificateResponse;

class DeleteSigningCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteSigningCertificateResponsePrivate(DeleteSigningCertificateResponse * const q);

    void parseDeleteSigningCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteSigningCertificateResponse)
    Q_DISABLE_COPY(DeleteSigningCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
