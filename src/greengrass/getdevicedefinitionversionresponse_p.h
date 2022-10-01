// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_GETDEVICEDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class GetDeviceDefinitionVersionResponse;

class GetDeviceDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit GetDeviceDefinitionVersionResponsePrivate(GetDeviceDefinitionVersionResponse * const q);

    void parseGetDeviceDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetDeviceDefinitionVersionResponse)
    Q_DISABLE_COPY(GetDeviceDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
