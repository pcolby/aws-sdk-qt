// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGROUPCERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_CREATEGROUPCERTIFICATEAUTHORITYRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateGroupCertificateAuthorityResponse;

class CreateGroupCertificateAuthorityResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateGroupCertificateAuthorityResponsePrivate(CreateGroupCertificateAuthorityResponse * const q);

    void parseCreateGroupCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGroupCertificateAuthorityResponse)
    Q_DISABLE_COPY(CreateGroupCertificateAuthorityResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
