// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERCERTIFICATERESPONSE_H
#define QTAWS_DEREGISTERCERTIFICATERESPONSE_H

#include "directoryserviceresponse.h"
#include "deregistercertificaterequest.h"

namespace QtAws {
namespace DirectoryService {

class DeregisterCertificateResponsePrivate;

class QTAWSDIRECTORYSERVICE_EXPORT DeregisterCertificateResponse : public DirectoryServiceResponse {
    Q_OBJECT

public:
    DeregisterCertificateResponse(const DeregisterCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterCertificateResponse)
    Q_DISABLE_COPY(DeregisterCertificateResponse)

};

} // namespace DirectoryService
} // namespace QtAws

#endif
