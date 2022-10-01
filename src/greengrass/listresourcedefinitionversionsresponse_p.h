// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRESOURCEDEFINITIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTRESOURCEDEFINITIONVERSIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListResourceDefinitionVersionsResponse;

class ListResourceDefinitionVersionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListResourceDefinitionVersionsResponsePrivate(ListResourceDefinitionVersionsResponse * const q);

    void parseListResourceDefinitionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListResourceDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListResourceDefinitionVersionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
