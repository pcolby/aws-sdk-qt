// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEDEFINITIONRESPONSE_P_H
#define QTAWS_GETRESOURCEDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetResourceDefinitionResponse;

class GetResourceDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetResourceDefinitionResponsePrivate(GetResourceDefinitionResponse * const q);

    void parseGetResourceDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceDefinitionResponse)
    Q_DISABLE_COPY(GetResourceDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
