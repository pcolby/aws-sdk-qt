// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTSERVERCERTIFICATESRESPONSE_P_H
#define QTAWS_LISTSERVERCERTIFICATESRESPONSE_P_H

#include "iamresponse_p.h"

namespace QtAws {
namespace Iam {

class ListServerCertificatesResponse;

class ListServerCertificatesResponsePrivate : public IamResponsePrivate {

public:

    explicit ListServerCertificatesResponsePrivate(ListServerCertificatesResponse * const q);

    void parseListServerCertificatesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListServerCertificatesResponse)
    Q_DISABLE_COPY(ListServerCertificatesResponsePrivate)

};

} // namespace Iam
} // namespace QtAws

#endif
