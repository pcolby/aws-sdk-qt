// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATEFROMCSRRESPONSE_H
#define QTAWS_CREATECERTIFICATEFROMCSRRESPONSE_H

#include "iotresponse.h"
#include "createcertificatefromcsrrequest.h"

namespace QtAws {
namespace IoT {

class CreateCertificateFromCsrResponsePrivate;

class QTAWSIOT_EXPORT CreateCertificateFromCsrResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateCertificateFromCsrResponse(const CreateCertificateFromCsrRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCertificateFromCsrRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCertificateFromCsrResponse)
    Q_DISABLE_COPY(CreateCertificateFromCsrResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
