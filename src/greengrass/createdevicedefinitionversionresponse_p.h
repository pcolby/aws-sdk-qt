// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEDEFINITIONVERSIONRESPONSE_P_H
#define QTAWS_CREATEDEVICEDEFINITIONVERSIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionVersionResponse;

class CreateDeviceDefinitionVersionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateDeviceDefinitionVersionResponsePrivate(CreateDeviceDefinitionVersionResponse * const q);

    void parseCreateDeviceDefinitionVersionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeviceDefinitionVersionResponse)
    Q_DISABLE_COPY(CreateDeviceDefinitionVersionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
