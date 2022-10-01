// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTHYPERVISORCONFIGURATIONRESPONSE_P_H
#define QTAWS_IMPORTHYPERVISORCONFIGURATIONRESPONSE_P_H

#include "backupgatewayresponse_p.h"

namespace QtAws {
namespace BackupGateway {

class ImportHypervisorConfigurationResponse;

class ImportHypervisorConfigurationResponsePrivate : public BackupGatewayResponsePrivate {

public:

    explicit ImportHypervisorConfigurationResponsePrivate(ImportHypervisorConfigurationResponse * const q);

    void parseImportHypervisorConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportHypervisorConfigurationResponse)
    Q_DISABLE_COPY(ImportHypervisorConfigurationResponsePrivate)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
