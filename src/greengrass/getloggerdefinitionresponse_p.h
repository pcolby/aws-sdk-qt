// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGERDEFINITIONRESPONSE_P_H
#define QTAWS_GETLOGGERDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetLoggerDefinitionResponse;

class GetLoggerDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetLoggerDefinitionResponsePrivate(GetLoggerDefinitionResponse * const q);

    void parseGetLoggerDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoggerDefinitionResponse)
    Q_DISABLE_COPY(GetLoggerDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
