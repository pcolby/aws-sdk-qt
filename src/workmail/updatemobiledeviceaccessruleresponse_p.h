// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMOBILEDEVICEACCESSRULERESPONSE_P_H
#define QTAWS_UPDATEMOBILEDEVICEACCESSRULERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class UpdateMobileDeviceAccessRuleResponse;

class UpdateMobileDeviceAccessRuleResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit UpdateMobileDeviceAccessRuleResponsePrivate(UpdateMobileDeviceAccessRuleResponse * const q);

    void parseUpdateMobileDeviceAccessRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMobileDeviceAccessRuleResponse)
    Q_DISABLE_COPY(UpdateMobileDeviceAccessRuleResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
