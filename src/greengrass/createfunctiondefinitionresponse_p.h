// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEFUNCTIONDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateFunctionDefinitionResponse;

class CreateFunctionDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateFunctionDefinitionResponsePrivate(CreateFunctionDefinitionResponse * const q);

    void parseCreateFunctionDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFunctionDefinitionResponse)
    Q_DISABLE_COPY(CreateFunctionDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
