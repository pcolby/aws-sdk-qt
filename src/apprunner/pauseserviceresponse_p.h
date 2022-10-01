// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PAUSESERVICERESPONSE_P_H
#define QTAWS_PAUSESERVICERESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class PauseServiceResponse;

class PauseServiceResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit PauseServiceResponsePrivate(PauseServiceResponse * const q);

    void parsePauseServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PauseServiceResponse)
    Q_DISABLE_COPY(PauseServiceResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
