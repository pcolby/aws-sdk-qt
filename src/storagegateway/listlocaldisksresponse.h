// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTLOCALDISKSRESPONSE_H
#define QTAWS_LISTLOCALDISKSRESPONSE_H

#include "storagegatewayresponse.h"
#include "listlocaldisksrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListLocalDisksResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListLocalDisksResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListLocalDisksResponse(const ListLocalDisksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListLocalDisksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListLocalDisksResponse)
    Q_DISABLE_COPY(ListLocalDisksResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
