// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTIONRESPONSE_P_H
#define QTAWS_CREATECONNECTIONRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class CreateConnectionResponse;

class CreateConnectionResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit CreateConnectionResponsePrivate(CreateConnectionResponse * const q);

    void parseCreateConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectionResponse)
    Q_DISABLE_COPY(CreateConnectionResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
