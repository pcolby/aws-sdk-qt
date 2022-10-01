// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETFUNCTIONDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_GETFUNCTIONDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetFunctionDefinitionVersionResponse;

class GetFunctionDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetFunctionDefinitionVersionResponsePrivate(GetFunctionDefinitionVersionResponse * const q);

    void parseGetFunctionDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetFunctionDefinitionVersionResponse)
    Q_DISABLE_COPY(GetFunctionDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
