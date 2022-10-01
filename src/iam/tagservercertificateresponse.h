// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSERVERCERTIFICATERESPONSE_H
#define QTAWS_TAGSERVERCERTIFICATERESPONSE_H

#include "iamresponse.h"
#include "tagservercertificaterequest.h"

namespace QtAws {
namespace Iam {

class TagServerCertificateResponsePrivate;

class QTAWSIAM_EXPORT TagServerCertificateResponse : public IamResponse {
    Q_OBJECT

public:
    TagServerCertificateResponse(const TagServerCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const TagServerCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(TagServerCertificateResponse)
    Q_DISABLE_COPY(TagServerCertificateResponse)

};

} // namespace Iam
} // namespace QtAws

#endif
