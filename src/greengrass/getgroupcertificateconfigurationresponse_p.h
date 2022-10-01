// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGROUPCERTIFICATECONFIGURATIONRESPONSE_P_H
#define QTAWS_GETGROUPCERTIFICATECONFIGURATIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetGroupCertificateConfigurationResponse;

class GetGroupCertificateConfigurationResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetGroupCertificateConfigurationResponsePrivate(GetGroupCertificateConfigurationResponse * const q);

    void parseGetGroupCertificateConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGroupCertificateConfigurationResponse)
    Q_DISABLE_COPY(GetGroupCertificateConfigurationResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
