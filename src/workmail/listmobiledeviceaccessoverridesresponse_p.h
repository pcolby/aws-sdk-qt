// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILEDEVICEACCESSOVERRIDESRESPONSE_P_H
#define QTAWS_LISTMOBILEDEVICEACCESSOVERRIDESRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListMobileDeviceAccessOverridesResponse;

class ListMobileDeviceAccessOverridesResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListMobileDeviceAccessOverridesResponsePrivate(ListMobileDeviceAccessOverridesResponse * const q);

    void parseListMobileDeviceAccessOverridesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMobileDeviceAccessOverridesResponse)
    Q_DISABLE_COPY(ListMobileDeviceAccessOverridesResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
