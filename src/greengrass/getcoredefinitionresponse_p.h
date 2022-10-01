// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEFINITIONRESPONSE_P_H
#define QTAWS_GETCOREDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetCoreDefinitionResponse;

class GetCoreDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetCoreDefinitionResponsePrivate(GetCoreDefinitionResponse * const q);

    void parseGetCoreDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCoreDefinitionResponse)
    Q_DISABLE_COPY(GetCoreDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
