// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEHEALTHSERVICEACCESSFORORGANIZATIONRESPONSE_P_H
#define QTAWS_DISABLEHEALTHSERVICEACCESSFORORGANIZATIONRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DisableHealthServiceAccessForOrganizationResponse;

class DisableHealthServiceAccessForOrganizationResponsePrivate : public HealthResponsePrivate {

public:

    explicit DisableHealthServiceAccessForOrganizationResponsePrivate(DisableHealthServiceAccessForOrganizationResponse * const q);

    void parseDisableHealthServiceAccessForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableHealthServiceAccessForOrganizationResponse)
    Q_DISABLE_COPY(DisableHealthServiceAccessForOrganizationResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
