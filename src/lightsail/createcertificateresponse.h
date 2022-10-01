// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECERTIFICATERESPONSE_H
#define QTAWS_CREATECERTIFICATERESPONSE_H

#include "lightsailresponse.h"
#include "createcertificaterequest.h"

namespace QtAws {
namespace Lightsail {

class CreateCertificateResponsePrivate;

class QTAWSLIGHTSAIL_EXPORT CreateCertificateResponse : public LightsailResponse {
    Q_OBJECT

public:
    CreateCertificateResponse(const CreateCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCertificateResponse)
    Q_DISABLE_COPY(CreateCertificateResponse)

};

} // namespace Lightsail
} // namespace QtAws

#endif
