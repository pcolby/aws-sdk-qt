// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTIONRESPONSE_P_H
#define QTAWS_DELETECONNECTIONRESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class DeleteConnectionResponse;

class DeleteConnectionResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit DeleteConnectionResponsePrivate(DeleteConnectionResponse * const q);

    void parseDeleteConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConnectionResponse)
    Q_DISABLE_COPY(DeleteConnectionResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
