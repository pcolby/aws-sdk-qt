// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTORPROFILERESPONSE_P_H
#define QTAWS_CREATECONNECTORPROFILERESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class CreateConnectorProfileResponse;

class CreateConnectorProfileResponsePrivate : public AppflowResponsePrivate {

public:

    explicit CreateConnectorProfileResponsePrivate(CreateConnectorProfileResponse * const q);

    void parseCreateConnectorProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectorProfileResponse)
    Q_DISABLE_COPY(CreateConnectorProfileResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
