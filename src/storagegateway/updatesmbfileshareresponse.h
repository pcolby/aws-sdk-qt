// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMBFILESHARERESPONSE_H
#define QTAWS_UPDATESMBFILESHARERESPONSE_H

#include "storagegatewayresponse.h"
#include "updatesmbfilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateSMBFileShareResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT UpdateSMBFileShareResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    UpdateSMBFileShareResponse(const UpdateSMBFileShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateSMBFileShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateSMBFileShareResponse)
    Q_DISABLE_COPY(UpdateSMBFileShareResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
