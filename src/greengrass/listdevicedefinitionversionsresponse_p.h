// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEDEFINITIONVERSIONSRESPONSE_P_H
#define QTAWS_LISTDEVICEDEFINITIONVERSIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListDeviceDefinitionVersionsResponse;

class ListDeviceDefinitionVersionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListDeviceDefinitionVersionsResponsePrivate(ListDeviceDefinitionVersionsResponse * const q);

    void parseListDeviceDefinitionVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeviceDefinitionVersionsResponse)
    Q_DISABLE_COPY(ListDeviceDefinitionVersionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
