// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTOREDISCSIVOLUMERESPONSE_H
#define QTAWS_CREATESTOREDISCSIVOLUMERESPONSE_H

#include "storagegatewayresponse.h"
#include "createstorediscsivolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateStorediSCSIVolumeResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateStorediSCSIVolumeResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CreateStorediSCSIVolumeResponse(const CreateStorediSCSIVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateStorediSCSIVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateStorediSCSIVolumeResponse)
    Q_DISABLE_COPY(CreateStorediSCSIVolumeResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
