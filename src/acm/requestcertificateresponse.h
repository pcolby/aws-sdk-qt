// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTCERTIFICATERESPONSE_H
#define QTAWS_REQUESTCERTIFICATERESPONSE_H

#include "acmresponse.h"
#include "requestcertificaterequest.h"

namespace QtAws {
namespace Acm {

class RequestCertificateResponsePrivate;

class QTAWSACM_EXPORT RequestCertificateResponse : public AcmResponse {
    Q_OBJECT

public:
    RequestCertificateResponse(const RequestCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RequestCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RequestCertificateResponse)
    Q_DISABLE_COPY(RequestCertificateResponse)

};

} // namespace Acm
} // namespace QtAws

#endif
