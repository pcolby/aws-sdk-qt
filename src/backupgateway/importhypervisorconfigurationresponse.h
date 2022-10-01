// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTHYPERVISORCONFIGURATIONRESPONSE_H
#define QTAWS_IMPORTHYPERVISORCONFIGURATIONRESPONSE_H

#include "backupgatewayresponse.h"
#include "importhypervisorconfigurationrequest.h"

namespace QtAws {
namespace BackupGateway {

class ImportHypervisorConfigurationResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT ImportHypervisorConfigurationResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    ImportHypervisorConfigurationResponse(const ImportHypervisorConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportHypervisorConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportHypervisorConfigurationResponse)
    Q_DISABLE_COPY(ImportHypervisorConfigurationResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
