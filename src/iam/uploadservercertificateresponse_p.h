// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSERVERCERTIFICATERESPONSE_P_H
#define QTAWS_UPLOADSERVERCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UploadServerCertificateResponse;

class UploadServerCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit UploadServerCertificateResponsePrivate(UploadServerCertificateResponse * const q);

    void parseUploadServerCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UploadServerCertificateResponse)
    Q_DISABLE_COPY(UploadServerCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
