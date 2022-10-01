// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEDISCSIVOLUMERESPONSE_H
#define QTAWS_CREATECACHEDISCSIVOLUMERESPONSE_H

#include "storagegatewayresponse.h"
#include "createcachediscsivolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateCachediSCSIVolumeResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateCachediSCSIVolumeResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CreateCachediSCSIVolumeResponse(const CreateCachediSCSIVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateCachediSCSIVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateCachediSCSIVolumeResponse)
    Q_DISABLE_COPY(CreateCachediSCSIVolumeResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
