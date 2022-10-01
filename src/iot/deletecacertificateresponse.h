// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECACERTIFICATERESPONSE_H
#define QTAWS_DELETECACERTIFICATERESPONSE_H

#include "iotresponse.h"
#include "deletecacertificaterequest.h"

namespace QtAws {
namespace IoT {

class DeleteCACertificateResponsePrivate;

class QTAWSIOT_EXPORT DeleteCACertificateResponse : public IoTResponse {
    Q_OBJECT

public:
    DeleteCACertificateResponse(const DeleteCACertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCACertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCACertificateResponse)
    Q_DISABLE_COPY(DeleteCACertificateResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
