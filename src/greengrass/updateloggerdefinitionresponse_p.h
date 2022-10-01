// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATELOGGERDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATELOGGERDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateLoggerDefinitionResponse;

class UpdateLoggerDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateLoggerDefinitionResponsePrivate(UpdateLoggerDefinitionResponse * const q);

    void parseUpdateLoggerDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateLoggerDefinitionResponse)
    Q_DISABLE_COPY(UpdateLoggerDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
