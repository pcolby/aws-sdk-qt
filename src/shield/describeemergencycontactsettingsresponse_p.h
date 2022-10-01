// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEMERGENCYCONTACTSETTINGSRESPONSE_P_H
#define QTAWS_DESCRIBEEMERGENCYCONTACTSETTINGSRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DescribeEmergencyContactSettingsResponse;

class DescribeEmergencyContactSettingsResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DescribeEmergencyContactSettingsResponsePrivate(DescribeEmergencyContactSettingsResponse * const q);

    void parseDescribeEmergencyContactSettingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeEmergencyContactSettingsResponse)
    Q_DISABLE_COPY(DescribeEmergencyContactSettingsResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
