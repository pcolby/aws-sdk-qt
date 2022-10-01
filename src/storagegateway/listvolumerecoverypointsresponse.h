// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMERECOVERYPOINTSRESPONSE_H
#define QTAWS_LISTVOLUMERECOVERYPOINTSRESPONSE_H

#include "storagegatewayresponse.h"
#include "listvolumerecoverypointsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeRecoveryPointsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListVolumeRecoveryPointsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListVolumeRecoveryPointsResponse(const ListVolumeRecoveryPointsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVolumeRecoveryPointsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVolumeRecoveryPointsResponse)
    Q_DISABLE_COPY(ListVolumeRecoveryPointsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
