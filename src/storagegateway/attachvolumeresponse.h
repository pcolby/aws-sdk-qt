// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHVOLUMERESPONSE_H
#define QTAWS_ATTACHVOLUMERESPONSE_H

#include "storagegatewayresponse.h"
#include "attachvolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class AttachVolumeResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT AttachVolumeResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    AttachVolumeResponse(const AttachVolumeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachVolumeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachVolumeResponse)
    Q_DISABLE_COPY(AttachVolumeResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
