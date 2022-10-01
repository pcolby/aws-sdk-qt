// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFUNCTIONDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEFUNCTIONDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DeleteFunctionDefinitionResponse;

class DeleteFunctionDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DeleteFunctionDefinitionResponsePrivate(DeleteFunctionDefinitionResponse * const q);

    void parseDeleteFunctionDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFunctionDefinitionResponse)
    Q_DISABLE_COPY(DeleteFunctionDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
