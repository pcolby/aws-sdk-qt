// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPLOADSERVERCERTIFICATERESPONSE_H
#define QTAWS_UPLOADSERVERCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "uploadservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class UploadServerCertificateResponsePrivate;

class QTAWSIAM_EXPORT UploadServerCertificateResponse : public IamResponse {
    Q_OBJECT

public:
    UploadServerCertificateResponse(const UploadServerCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UploadServerCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UploadServerCertificateResponse)
    Q_DISABLE_COPY(UploadServerCertificateResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
