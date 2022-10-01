// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESIGNINGCERTIFICATERESPONSE_H
#define QTAWS_UPDATESIGNINGCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "updatesigningcertificaterequest.h"

namespace QtAws {
namespace Iam {

class UpdateSigningCertificateResponsePrivate;

class QTAWSIAM_EXPORT UpdateSigningCertificateResponse : public IamResponse {
    Q_OBJECT

public:
    UpdateSigningCertificateResponse(const UpdateSigningCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSigningCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSigningCertificateResponse)
    Q_DISABLE_COPY(UpdateSigningCertificateResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
