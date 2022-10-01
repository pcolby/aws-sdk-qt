// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNREGISTERCONNECTORRESPONSE_P_H
#define QTAWS_UNREGISTERCONNECTORRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class UnregisterConnectorResponse;

class UnregisterConnectorResponsePrivate : public AppflowResponsePrivate {

public:

    explicit UnregisterConnectorResponsePrivate(UnregisterConnectorResponse * const q);

    void parseUnregisterConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UnregisterConnectorResponse)
    Q_DISABLE_COPY(UnregisterConnectorResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
