// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTREGISTRYSCANNINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTREGISTRYSCANNINGCONFIGURATIONRESPONSE_P_H

#include "ecrresponse_p.h"

namespace QtAws {
namespace Ecr {

class PutRegistryScanningConfigurationResponse;

class PutRegistryScanningConfigurationResponsePrivate : public EcrResponsePrivate {

public:

    explicit PutRegistryScanningConfigurationResponsePrivate(PutRegistryScanningConfigurationResponse * const q);

    void parsePutRegistryScanningConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRegistryScanningConfigurationResponse)
    Q_DISABLE_COPY(PutRegistryScanningConfigurationResponsePrivate)

};

} // namespace Ecr
} // namespace QtAws

#endif
