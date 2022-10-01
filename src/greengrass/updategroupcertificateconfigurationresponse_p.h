// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGROUPCERTIFICATECONFIGURATIONRESPONSE_P_H
#define QTAWS_UPDATEGROUPCERTIFICATECONFIGURATIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateGroupCertificateConfigurationResponse;

class UpdateGroupCertificateConfigurationResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateGroupCertificateConfigurationResponsePrivate(UpdateGroupCertificateConfigurationResponse * const q);

    void parseUpdateGroupCertificateConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGroupCertificateConfigurationResponse)
    Q_DISABLE_COPY(UpdateGroupCertificateConfigurationResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
