// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECACERTIFICATERESPONSE_H
#define QTAWS_UPDATECACERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "updatecacertificaterequest.h"

namespace QtAws {
namespace IoT {

class UpdateCACertificateResponsePrivate;

class QTAWSIOT_EXPORT UpdateCACertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    UpdateCACertificateResponse(const UpdateCACertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateCACertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateCACertificateResponse)
    Q_DISABLE_COPY(UpdateCACertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
