// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESMBFILESHARERESPONSE_H
#define QTAWS_CREATESMBFILESHARERESPONSE_H

#include "storagegatewayresponse.h"
#include "createsmbfilesharerequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateSMBFileShareResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateSMBFileShareResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CreateSMBFileShareResponse(const CreateSMBFileShareRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSMBFileShareRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSMBFileShareResponse)
    Q_DISABLE_COPY(CreateSMBFileShareResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
