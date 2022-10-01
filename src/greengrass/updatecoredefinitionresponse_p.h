// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECOREDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATECOREDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateCoreDefinitionResponse;

class UpdateCoreDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateCoreDefinitionResponsePrivate(UpdateCoreDefinitionResponse * const q);

    void parseUpdateCoreDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCoreDefinitionResponse)
    Q_DISABLE_COPY(UpdateCoreDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
