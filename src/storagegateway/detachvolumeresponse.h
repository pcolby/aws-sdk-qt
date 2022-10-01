// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVOLUMERESPONSE_H
#define QTAWS_DETACHVOLUMERESPONSE_H

#include "storagegatewayresponse.h"
#include "detachvolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class DetachVolumeResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DetachVolumeResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    DetachVolumeResponse(const DetachVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachVolumeResponse)
    Q_DISABLE_COPY(DetachVolumeResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
