// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESERVERCERTIFICATERESPONSE_P_H
#define QTAWS_DELETESERVERCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class DeleteServerCertificateResponse;

class DeleteServerCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit DeleteServerCertificateResponsePrivate(DeleteServerCertificateResponse * const q);

    void parseDeleteServerCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteServerCertificateResponse)
    Q_DISABLE_COPY(DeleteServerCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
