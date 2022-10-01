// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGERDEFINITIONRESPONSE_P_H
#define QTAWS_DELETELOGGERDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DeleteLoggerDefinitionResponse;

class DeleteLoggerDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DeleteLoggerDefinitionResponsePrivate(DeleteLoggerDefinitionResponse * const q);

    void parseDeleteLoggerDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoggerDefinitionResponse)
    Q_DISABLE_COPY(DeleteLoggerDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
