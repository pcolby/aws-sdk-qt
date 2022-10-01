// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTVOLUMEINITIATORSRESPONSE_H
#define QTAWS_LISTVOLUMEINITIATORSRESPONSE_H

#include "storagegatewayresponse.h"
#include "listvolumeinitiatorsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListVolumeInitiatorsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListVolumeInitiatorsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListVolumeInitiatorsResponse(const ListVolumeInitiatorsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListVolumeInitiatorsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListVolumeInitiatorsResponse)
    Q_DISABLE_COPY(ListVolumeInitiatorsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
