// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCERTIFICATERESPONSE_H
#define QTAWS_GETCERTIFICATERESPONSE_H

#include "acmpcaresponse.h"
#include "getcertificaterequest.h"

namespace QtAws {
namespace AcmPca {

class GetCertificateResponsePrivate;

class QTAWSACMPCA_EXPORT GetCertificateResponse : public AcmPcaResponse {
    Q_OBJECT

public:
    GetCertificateResponse(const GetCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetCertificateResponse)
    Q_DISABLE_COPY(GetCertificateResponse)

};

} // namespace AcmPca
} // namespace QtAws

#endif
