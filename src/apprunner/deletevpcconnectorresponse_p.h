// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCCONNECTORRESPONSE_P_H
#define QTAWS_DELETEVPCCONNECTORRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DeleteVpcConnectorResponse;

class DeleteVpcConnectorResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DeleteVpcConnectorResponsePrivate(DeleteVpcConnectorResponse * const q);

    void parseDeleteVpcConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVpcConnectorResponse)
    Q_DISABLE_COPY(DeleteVpcConnectorResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
