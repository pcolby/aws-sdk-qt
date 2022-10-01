// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECOREDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_CREATECOREDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateCoreDefinitionVersionResponse;

class CreateCoreDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateCoreDefinitionVersionResponsePrivate(CreateCoreDefinitionVersionResponse * const q);

    void parseCreateCoreDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCoreDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateCoreDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
