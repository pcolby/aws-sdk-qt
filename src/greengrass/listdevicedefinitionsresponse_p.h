// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTDEVICEDEFINITIONSRESPONSE_P_H
#define QTAWS_LISTDEVICEDEFINITIONSRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class ListDeviceDefinitionsResponse;

class ListDeviceDefinitionsResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit ListDeviceDefinitionsResponsePrivate(ListDeviceDefinitionsResponse * const q);

    void parseListDeviceDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListDeviceDefinitionsResponse)
    Q_DISABLE_COPY(ListDeviceDefinitionsResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
