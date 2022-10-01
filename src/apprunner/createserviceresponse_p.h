// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESERVICERESPONSE_P_H
#define QTAWS_CREATESERVICERESPONSE_P_H

#include "apprunnerresponse_p.h"

namespace QtAws {
namespace AppRunner {

class CreateServiceResponse;

class CreateServiceResponsePrivate : public AppRunnerResponsePrivate {

public:

    explicit CreateServiceResponsePrivate(CreateServiceResponse * const q);

    void parseCreateServiceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateServiceResponse)
    Q_DISABLE_COPY(CreateServiceResponsePrivate)

};

} // namespace AppRunner
} // namespace QtAws

#endif
