// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEKEYSANDCERTIFICATERESPONSE_H
#define QTAWS_CREATEKEYSANDCERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "createkeysandcertificaterequest.h"

namespace QtAws {
namespace IoT {

class CreateKeysAndCertificateResponsePrivate;

class QTAWSIOT_EXPORT CreateKeysAndCertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    CreateKeysAndCertificateResponse(const CreateKeysAndCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateKeysAndCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateKeysAndCertificateResponse)
    Q_DISABLE_COPY(CreateKeysAndCertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
