// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFUNCTIONDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATEFUNCTIONDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateFunctionDefinitionResponse;

class UpdateFunctionDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateFunctionDefinitionResponsePrivate(UpdateFunctionDefinitionResponse * const q);

    void parseUpdateFunctionDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFunctionDefinitionResponse)
    Q_DISABLE_COPY(UpdateFunctionDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
