// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEHSMCLIENTCERTIFICATERESPONSE_H
#define QTAWS_CREATEHSMCLIENTCERTIFICATERESPONSE_H

#include "redshiftresponse.h"
#include "createhsmclientcertificaterequest.h"

namespace QtAws {
namespace Redshift {

class CreateHsmClientCertificateResponsePrivate;

class QTAWSREDSHIFT_EXPORT CreateHsmClientCertificateResponse : public RedshiftResponse {
    Q_OBJECT

public:
    CreateHsmClientCertificateResponse(const CreateHsmClientCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateHsmClientCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateHsmClientCertificateResponse)
    Q_DISABLE_COPY(CreateHsmClientCertificateResponse)

};

} // namespace Redshift
} // namespace QtAws

#endif
