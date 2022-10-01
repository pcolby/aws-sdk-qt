// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSERVERCERTIFICATERESPONSE_H
#define QTAWS_GETSERVERCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "getservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class GetServerCertificateResponsePrivate;

class QTAWSIAM_EXPORT GetServerCertificateResponse : public IamResponse {
    Q_OBJECT

public:
    GetServerCertificateResponse(const GetServerCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetServerCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetServerCertificateResponse)
    Q_DISABLE_COPY(GetServerCertificateResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
