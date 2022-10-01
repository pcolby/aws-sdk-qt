// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFUNCTIONDEFINITIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTFUNCTIONDEFINITIONVERSIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListFunctionDefinitionVersionsResponse;

class ListFunctionDefinitionVersionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListFunctionDefinitionVersionsResponsePrivate(ListFunctionDefinitionVersionsResponse * const q);

    void parseListFunctionDefinitionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListFunctionDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListFunctionDefinitionVersionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
