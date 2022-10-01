// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTHYPERVISORCONFIGURATIONRESPONSE_P_H
#define QTAWS_TESTHYPERVISORCONFIGURATIONRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class TestHypervisorConfigurationResponse;

class TestHypervisorConfigurationResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit TestHypervisorConfigurationResponsePrivate(TestHypervisorConfigurationResponse * const q);

    void parseTestHypervisorConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestHypervisorConfigurationResponse)
    Q_DISABLE_COPY(TestHypervisorConfigurationResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
