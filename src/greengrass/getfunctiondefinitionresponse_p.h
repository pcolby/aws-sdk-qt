// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONDEFINITIONRESPONSE_P_H
#define QTAWS_GETFUNCTIONDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionResponse;

class GetFunctionDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetFunctionDefinitionResponsePrivate(GetFunctionDefinitionResponse * const q);

    void parseGetFunctionDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFunctionDefinitionResponse)
    Q_DISABLE_COPY(GetFunctionDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
