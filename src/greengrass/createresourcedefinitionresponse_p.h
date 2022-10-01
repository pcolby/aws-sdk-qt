// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDEFINITIONRESPONSE_P_H
#define QTAWS_CREATERESOURCEDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionResponse;

class CreateResourceDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateResourceDefinitionResponsePrivate(CreateResourceDefinitionResponse * const q);

    void parseCreateResourceDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceDefinitionResponse)
    Q_DISABLE_COPY(CreateResourceDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
