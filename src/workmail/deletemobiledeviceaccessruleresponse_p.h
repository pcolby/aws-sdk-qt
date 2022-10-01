// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMOBILEDEVICEACCESSRULERESPONSE_P_H
#define QTAWS_DELETEMOBILEDEVICEACCESSRULERESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeleteMobileDeviceAccessRuleResponse;

class DeleteMobileDeviceAccessRuleResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeleteMobileDeviceAccessRuleResponsePrivate(DeleteMobileDeviceAccessRuleResponse * const q);

    void parseDeleteMobileDeviceAccessRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMobileDeviceAccessRuleResponse)
    Q_DISABLE_COPY(DeleteMobileDeviceAccessRuleResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
