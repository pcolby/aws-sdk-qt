// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETREGISTRYSCANNINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETREGISTRYSCANNINGCONFIGURATIONRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class GetRegistryScanningConfigurationResponse;

class GetRegistryScanningConfigurationResponsePrivate : public EcrResponsePrivate {

public:

    explicit GetRegistryScanningConfigurationResponsePrivate(GetRegistryScanningConfigurationResponse * const q);

    void parseGetRegistryScanningConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetRegistryScanningConfigurationResponse)
    Q_DISABLE_COPY(GetRegistryScanningConfigurationResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
