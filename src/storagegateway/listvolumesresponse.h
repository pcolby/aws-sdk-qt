// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMESRESPONSE_H
#define QTAWS_LISTVOLUMESRESPONSE_H

#include "storagegatewayresponse.h"
#include "listvolumesrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListVolumesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListVolumesResponse(const ListVolumesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVolumesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVolumesResponse)
    Q_DISABLE_COPY(ListVolumesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
