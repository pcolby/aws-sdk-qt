// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGERDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_CREATELOGGERDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateLoggerDefinitionVersionResponse;

class CreateLoggerDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateLoggerDefinitionVersionResponsePrivate(CreateLoggerDefinitionVersionResponse * const q);

    void parseCreateLoggerDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLoggerDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateLoggerDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
