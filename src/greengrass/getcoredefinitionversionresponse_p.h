// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCOREDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_GETCOREDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetCoreDefinitionVersionResponse;

class GetCoreDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetCoreDefinitionVersionResponsePrivate(GetCoreDefinitionVersionResponse * const q);

    void parseGetCoreDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCoreDefinitionVersionResponse)
    Q_DISABLE_COPY(GetCoreDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
