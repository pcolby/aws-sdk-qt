// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOREDEFINITIONRESPONSE_P_H
#define QTAWS_CREATECOREDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateCoreDefinitionResponse;

class CreateCoreDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateCoreDefinitionResponsePrivate(CreateCoreDefinitionResponse * const q);

    void parseCreateCoreDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCoreDefinitionResponse)
    Q_DISABLE_COPY(CreateCoreDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
