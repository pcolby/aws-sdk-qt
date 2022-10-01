// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEDEFINITIONRESPONSE_P_H
#define QTAWS_GETDEVICEDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetDeviceDefinitionResponse;

class GetDeviceDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetDeviceDefinitionResponsePrivate(GetDeviceDefinitionResponse * const q);

    void parseGetDeviceDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceDefinitionResponse)
    Q_DISABLE_COPY(GetDeviceDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
