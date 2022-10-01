// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSIGNINGCERTIFICATERESPONSE_H
#define QTAWS_UPLOADSIGNINGCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "uploadsigningcertificaterequest.h"

namespace QtAws {
namespace Iam {

class UploadSigningCertificateResponsePrivate;

class QTAWSIAM_EXPORT UploadSigningCertificateResponse : public IamResponse {
    Q_OBJECT

public:
    UploadSigningCertificateResponse(const UploadSigningCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadSigningCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadSigningCertificateResponse)
    Q_DISABLE_COPY(UploadSigningCertificateResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
