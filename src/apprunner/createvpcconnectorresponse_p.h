// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCCONNECTORRESPONSE_P_H
#define QTAWS_CREATEVPCCONNECTORRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class CreateVpcConnectorResponse;

class CreateVpcConnectorResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit CreateVpcConnectorResponsePrivate(CreateVpcConnectorResponse * const q);

    void parseCreateVpcConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateVpcConnectorResponse)
    Q_DISABLE_COPY(CreateVpcConnectorResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
