// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILMONITORINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEEMAILMONITORINGCONFIGURATIONRESPONSE_P_H

#include "workmailresponse_p.h"

namespace QtAws {
namespace WorkMail {

class DeleteEmailMonitoringConfigurationResponse;

class DeleteEmailMonitoringConfigurationResponsePrivate : public WorkMailResponsePrivate {

public:

    explicit DeleteEmailMonitoringConfigurationResponsePrivate(DeleteEmailMonitoringConfigurationResponse * const q);

    void parseDeleteEmailMonitoringConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEmailMonitoringConfigurationResponse)
    Q_DISABLE_COPY(DeleteEmailMonitoringConfigurationResponsePrivate)

};

} // namespace WorkMail
} // namespace QtAws

#endif
