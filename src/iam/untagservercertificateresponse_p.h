// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGSERVERCERTIFICATERESPONSE_P_H
#define QTAWS_UNTAGSERVERCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class UntagServerCertificateResponse;

class UntagServerCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit UntagServerCertificateResponsePrivate(UntagServerCertificateResponse * const q);

    void parseUntagServerCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagServerCertificateResponse)
    Q_DISABLE_COPY(UntagServerCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
