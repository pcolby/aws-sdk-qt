// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEHEALTHSERVICEACCESSFORORGANIZATIONRESPONSE_P_H
#define QTAWS_ENABLEHEALTHSERVICEACCESSFORORGANIZATIONRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class EnableHealthServiceAccessForOrganizationResponse;

class EnableHealthServiceAccessForOrganizationResponsePrivate : public HealthResponsePrivate {

public:

    explicit EnableHealthServiceAccessForOrganizationResponsePrivate(EnableHealthServiceAccessForOrganizationResponse * const q);

    void parseEnableHealthServiceAccessForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableHealthServiceAccessForOrganizationResponse)
    Q_DISABLE_COPY(EnableHealthServiceAccessForOrganizationResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
