// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RENEWCERTIFICATERESPONSE_H
#define QTAWS_RENEWCERTIFICATERESPONSE_H

#include "acmresponse.h"
#include "renewcertificaterequest.h"

namespace QtAws {
namespace Acm {

class RenewCertificateResponsePrivate;

class QTAWSACM_EXPORT RenewCertificateResponse : public AcmResponse {
    Q_OBJECT

public:
    RenewCertificateResponse(const RenewCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RenewCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RenewCertificateResponse)
    Q_DISABLE_COPY(RenewCertificateResponse)

};

} // namespace Acm
} // namespace QtAws

#endif
