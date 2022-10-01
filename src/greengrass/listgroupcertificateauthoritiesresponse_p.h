// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUPCERTIFICATEAUTHORITIESRESPONSE_P_H
#define QTAWS_LISTGROUPCERTIFICATEAUTHORITIESRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListGroupCertificateAuthoritiesResponse;

class ListGroupCertificateAuthoritiesResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListGroupCertificateAuthoritiesResponsePrivate(ListGroupCertificateAuthoritiesResponse * const q);

    void parseListGroupCertificateAuthoritiesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroupCertificateAuthoritiesResponse)
    Q_DISABLE_COPY(ListGroupCertificateAuthoritiesResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
