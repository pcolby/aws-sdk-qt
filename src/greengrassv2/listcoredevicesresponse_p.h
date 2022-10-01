// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCOREDEVICESRESPONSE_P_H
#define QTAWS_LISTCOREDEVICESRESPONSE_P_H

#include "greengrassv2response_p.h"

namespace QtAws {
namespace GreengrassV2 {

class ListCoreDevicesResponse;

class ListCoreDevicesResponsePrivate : public GreengrassV2ResponsePrivate {

public:

    explicit ListCoreDevicesResponsePrivate(ListCoreDevicesResponse * const q);

    void parseListCoreDevicesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCoreDevicesResponse)
    Q_DISABLE_COPY(ListCoreDevicesResponsePrivate)

};

} // namespace GreengrassV2
} // namespace QtAws

#endif
