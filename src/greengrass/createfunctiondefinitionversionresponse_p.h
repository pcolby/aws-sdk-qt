// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFUNCTIONDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_CREATEFUNCTIONDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateFunctionDefinitionVersionResponse;

class CreateFunctionDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateFunctionDefinitionVersionResponsePrivate(CreateFunctionDefinitionVersionResponse * const q);

    void parseCreateFunctionDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFunctionDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateFunctionDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
