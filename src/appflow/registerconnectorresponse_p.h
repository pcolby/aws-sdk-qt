// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERCONNECTORRESPONSE_P_H
#define QTAWS_REGISTERCONNECTORRESPONSE_P_H

#include "appflowresponse_p.h"

namespace QtAws {
namespace Appflow {

class RegisterConnectorResponse;

class RegisterConnectorResponsePrivate : public AppflowResponsePrivate {

public:

    explicit RegisterConnectorResponsePrivate(RegisterConnectorResponse * const q);

    void parseRegisterConnectorResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterConnectorResponse)
    Q_DISABLE_COPY(RegisterConnectorResponsePrivate)

};

} // namespace Appflow
} // namespace QtAws

#endif
