// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEHYPERVISORRESPONSE_H
#define QTAWS_DELETEHYPERVISORRESPONSE_H

#include "backupgatewayresponse.h"
#include "deletehypervisorrequest.h"

namespace QtAws {
namespace BackupGateway {

class DeleteHypervisorResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT DeleteHypervisorResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    DeleteHypervisorResponse(const DeleteHypervisorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteHypervisorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteHypervisorResponse)
    Q_DISABLE_COPY(DeleteHypervisorResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
