// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGERDEFINITIONRESPONSE_P_H
#define QTAWS_CREATELOGGERDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateLoggerDefinitionResponse;

class CreateLoggerDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateLoggerDefinitionResponsePrivate(CreateLoggerDefinitionResponse * const q);

    void parseCreateLoggerDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLoggerDefinitionResponse)
    Q_DISABLE_COPY(CreateLoggerDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
