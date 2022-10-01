// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOGGERDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTLOGGERDEFINITIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListLoggerDefinitionsResponse;

class ListLoggerDefinitionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListLoggerDefinitionsResponsePrivate(ListLoggerDefinitionsResponse * const q);

    void parseListLoggerDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListLoggerDefinitionsResponse)
    Q_DISABLE_COPY(ListLoggerDefinitionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
