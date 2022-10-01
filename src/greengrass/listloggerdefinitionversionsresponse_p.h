// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGERDEFINITIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTLOGGERDEFINITIONVERSIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListLoggerDefinitionVersionsResponse;

class ListLoggerDefinitionVersionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListLoggerDefinitionVersionsResponsePrivate(ListLoggerDefinitionVersionsResponse * const q);

    void parseListLoggerDefinitionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLoggerDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListLoggerDefinitionVersionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
