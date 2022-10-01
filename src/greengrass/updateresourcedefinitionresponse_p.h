// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATERESOURCEDEFINITIONRESPONSE_P_H
#define QTAWS_UPDATERESOURCEDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class UpdateResourceDefinitionResponse;

class UpdateResourceDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit UpdateResourceDefinitionResponsePrivate(UpdateResourceDefinitionResponse * const q);

    void parseUpdateResourceDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateResourceDefinitionResponse)
    Q_DISABLE_COPY(UpdateResourceDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
