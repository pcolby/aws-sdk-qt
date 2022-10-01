// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECOREDEVICERESPONSE_P_H
#define QTAWS_DELETECOREDEVICERESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class DeleteCoreDeviceResponse;

class DeleteCoreDeviceResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit DeleteCoreDeviceResponsePrivate(DeleteCoreDeviceResponse * const q);

    void parseDeleteCoreDeviceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCoreDeviceResponse)
    Q_DISABLE_COPY(DeleteCoreDeviceResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
