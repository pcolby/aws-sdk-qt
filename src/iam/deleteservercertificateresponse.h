// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERCERTIFICATERESPONSE_H
#define QTAWS_DELETESERVERCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "deleteservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class DeleteServerCertificateResponsePrivate;

class QTAWSIAM_EXPORT DeleteServerCertificateResponse : public IamResponse {
    Q_OBJECT

public:
    DeleteServerCertificateResponse(const DeleteServerCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteServerCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteServerCertificateResponse)
    Q_DISABLE_COPY(DeleteServerCertificateResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
