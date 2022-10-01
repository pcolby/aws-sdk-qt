// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ISSUECERTIFICATERESPONSE_H
#define QTAWS_ISSUECERTIFICATERESPONSE_H

#include "acmpcaresponse.h"
#include "issuecertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class IssueCertificateResponsePrivate;

class QTAWSACMPCA_EXPORT IssueCertificateResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    IssueCertificateResponse(const IssueCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const IssueCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IssueCertificateResponse)
    Q_DISABLE_COPY(IssueCertificateResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
