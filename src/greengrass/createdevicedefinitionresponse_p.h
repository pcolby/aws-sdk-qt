// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEDEFINITIONRESPONSE_P_H
#define QTAWS_CREATEDEVICEDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class CreateDeviceDefinitionResponse;

class CreateDeviceDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit CreateDeviceDefinitionResponsePrivate(CreateDeviceDefinitionResponse * const q);

    void parseCreateDeviceDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDeviceDefinitionResponse)
    Q_DISABLE_COPY(CreateDeviceDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
