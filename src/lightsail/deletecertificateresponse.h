// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECERTIFICATERESPONSE_H
#define QTAWS_DELETECERTIFICATERESPONSE_H

#include "lightsailresponse.h"
#include "deletecertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class DeleteCertificateResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT DeleteCertificateResponse : public LightsailResponse {
    Q_OBJECT

public:
    DeleteCertificateResponse(const DeleteCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteCertificateResponse)
    Q_DISABLE_COPY(DeleteCertificateResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
