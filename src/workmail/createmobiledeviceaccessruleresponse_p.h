// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMOBILEDEVICEACCESSRULERESPONSE_P_H
#define QTAWS_CREATEMOBILEDEVICEACCESSRULERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class CreateMobileDeviceAccessRuleResponse;

class CreateMobileDeviceAccessRuleResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit CreateMobileDeviceAccessRuleResponsePrivate(CreateMobileDeviceAccessRuleResponse * const q);

    void parseCreateMobileDeviceAccessRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateMobileDeviceAccessRuleResponse)
    Q_DISABLE_COPY(CreateMobileDeviceAccessRuleResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
