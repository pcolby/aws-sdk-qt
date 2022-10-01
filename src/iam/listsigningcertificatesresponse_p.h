// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSIGNINGCERTIFICATESRESPONSE_P_H
#define QTAWS_LISTSIGNINGCERTIFICATESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListSigningCertificatesResponse;

class ListSigningCertificatesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListSigningCertificatesResponsePrivate(ListSigningCertificatesResponse * const q);

    void parseListSigningCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListSigningCertificatesResponse)
    Q_DISABLE_COPY(ListSigningCertificatesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
