// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSERVERCERTIFICATERESPONSE_H
#define QTAWS_UNTAGSERVERCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "untagservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class UntagServerCertificateResponsePrivate;

class QTAWSIAM_EXPORT UntagServerCertificateResponse : public IamResponse {
    Q_OBJECT

public:
    UntagServerCertificateResponse(const UntagServerCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UntagServerCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UntagServerCertificateResponse)
    Q_DISABLE_COPY(UntagServerCertificateResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
