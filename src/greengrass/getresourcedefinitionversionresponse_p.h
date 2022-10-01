// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETRESOURCEDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_GETRESOURCEDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetResourceDefinitionVersionResponse;

class GetResourceDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetResourceDefinitionVersionResponsePrivate(GetResourceDefinitionVersionResponse * const q);

    void parseGetResourceDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetResourceDefinitionVersionResponse)
    Q_DISABLE_COPY(GetResourceDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
