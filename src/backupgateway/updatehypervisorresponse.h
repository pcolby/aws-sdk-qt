// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEHYPERVISORRESPONSE_H
#define QTAWS_UPDATEHYPERVISORRESPONSE_H

#include "backupgatewayresponse.h"
#include "updatehypervisorrequest.h"

namespace QtAws {
namespace BackupGateway {

class UpdateHypervisorResponsePrivate;

class QTAWSBACKUPGATEWAY_EXPORT UpdateHypervisorResponse : public BackupGatewayResponse {
    Q_OBJECT

public:
    UpdateHypervisorResponse(const UpdateHypervisorRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateHypervisorRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateHypervisorResponse)
    Q_DISABLE_COPY(UpdateHypervisorResponse)

};

} // namespace BackupGateway
} // namespace QtAws

#endif
