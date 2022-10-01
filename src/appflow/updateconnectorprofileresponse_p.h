// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONNECTORPROFILERESPONSE_P_H
#define QTAWS_UPDATECONNECTORPROFILERESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class UpdateConnectorProfileResponse;

class UpdateConnectorProfileResponsePrivate : public AppflowResponsePrivate {

public:

    explicit UpdateConnectorProfileResponsePrivate(UpdateConnectorProfileResponse * const q);

    void parseUpdateConnectorProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConnectorProfileResponse)
    Q_DISABLE_COPY(UpdateConnectorProfileResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
