// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEMAILMONITORINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTEMAILMONITORINGCONFIGURATIONRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class PutEmailMonitoringConfigurationResponse;

class PutEmailMonitoringConfigurationResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit PutEmailMonitoringConfigurationResponsePrivate(PutEmailMonitoringConfigurationResponse * const q);

    void parsePutEmailMonitoringConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEmailMonitoringConfigurationResponse)
    Q_DISABLE_COPY(PutEmailMonitoringConfigurationResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
