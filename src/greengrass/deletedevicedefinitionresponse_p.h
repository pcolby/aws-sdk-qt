// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDEVICEDEFINITIONRESPONSE_P_H
#define QTAWS_DELETEDEVICEDEFINITIONRESPONSE_P_H

#include "greengrassresponse_p.h"

namespace QtAws {
namespace Greengrass {

class DeleteDeviceDefinitionResponse;

class DeleteDeviceDefinitionResponsePrivate : public GreengrassResponsePrivate {

public:

    explicit DeleteDeviceDefinitionResponsePrivate(DeleteDeviceDefinitionResponse * const q);

    void parseDeleteDeviceDefinitionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDeviceDefinitionResponse)
    Q_DISABLE_COPY(DeleteDeviceDefinitionResponsePrivate)

};

} // namespace Greengrass
} // namespace QtAws

#endif
