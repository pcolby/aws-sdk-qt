// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGGERDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_GETLOGGERDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetLoggerDefinitionVersionResponse;

class GetLoggerDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetLoggerDefinitionVersionResponsePrivate(GetLoggerDefinitionVersionResponse * const q);

    void parseGetLoggerDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoggerDefinitionVersionResponse)
    Q_DISABLE_COPY(GetLoggerDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
