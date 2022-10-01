// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCERTIFICATEAUTHORITYRESPONSE_P_H
#define QTAWS_GETGROUPCERTIFICATEAUTHORITYRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetGroupCertificateAuthorityResponse;

class GetGroupCertificateAuthorityResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetGroupCertificateAuthorityResponsePrivate(GetGroupCertificateAuthorityResponse * const q);

    void parseGetGroupCertificateAuthorityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupCertificateAuthorityResponse)
    Q_DISABLE_COPY(GetGroupCertificateAuthorityResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
