// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMOBILEDEVICEACCESSRULESRESPONSE_P_H
#define QTAWS_LISTMOBILEDEVICEACCESSRULESRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class ListMobileDeviceAccessRulesResponse;

class ListMobileDeviceAccessRulesResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit ListMobileDeviceAccessRulesResponsePrivate(ListMobileDeviceAccessRulesResponse * const q);

    void parseListMobileDeviceAccessRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMobileDeviceAccessRulesResponse)
    Q_DISABLE_COPY(ListMobileDeviceAccessRulesResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
