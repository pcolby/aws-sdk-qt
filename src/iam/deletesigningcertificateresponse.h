// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESIGNINGCERTIFICATERESPONSE_H
#define QTAWS_DELETESIGNINGCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "deletesigningcertificaterequest.h"

namespace QtAws {
namespace Iam {

class DeleteSigningCertificateResponsePrivate;

class QTAWSIAM_EXPORT DeleteSigningCertificateResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteSigningCertificateResponse(const DeleteSigningCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteSigningCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteSigningCertificateResponse)
    Q_DISABLE_COPY(DeleteSigningCertificateResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
