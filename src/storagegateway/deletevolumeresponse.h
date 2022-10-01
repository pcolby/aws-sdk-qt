// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOLUMERESPONSE_H
#define QTAWS_DELETEVOLUMERESPONSE_H

#include "storagegatewayresponse.h"
#include "deletevolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteVolumeResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DeleteVolumeResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DeleteVolumeResponse(const DeleteVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVolumeResponse)
    Q_DISABLE_COPY(DeleteVolumeResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
