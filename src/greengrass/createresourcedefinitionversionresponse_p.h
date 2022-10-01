// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCEDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_CREATERESOURCEDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateResourceDefinitionVersionResponse;

class CreateResourceDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateResourceDefinitionVersionResponsePrivate(CreateResourceDefinitionVersionResponse * const q);

    void parseCreateResourceDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateResourceDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateResourceDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
