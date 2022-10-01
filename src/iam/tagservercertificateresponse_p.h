// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGSERVERCERTIFICATERESPONSE_P_H
#define QTAWS_TAGSERVERCERTIFICATERESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class TagServerCertificateResponse;

class TagServerCertificateResponsePrivate : public IamResponsePrivate {

public:

    explicit TagServerCertificateResponsePrivate(TagServerCertificateResponse * const q);

    void parseTagServerCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagServerCertificateResponse)
    Q_DISABLE_COPY(TagServerCertificateResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
