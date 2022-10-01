// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESERVICERESPONSE_P_H
#define QTAWS_UPDATESERVICERESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class UpdateServiceResponse;

class UpdateServiceResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit UpdateServiceResponsePrivate(UpdateServiceResponse * const q);

    void parseUpdateServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateServiceResponse)
    Q_DISABLE_COPY(UpdateServiceResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
