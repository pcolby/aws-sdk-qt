// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTORDEFINITIONRESPONSE_P_H
#define QTAWS_DELETECONNECTORDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DeleteConnectorDefinitionResponse;

class DeleteConnectorDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DeleteConnectorDefinitionResponsePrivate(DeleteConnectorDefinitionResponse * const q);

    void parseDeleteConnectorDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConnectorDefinitionResponse)
    Q_DISABLE_COPY(DeleteConnectorDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
