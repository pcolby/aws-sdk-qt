// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGATEWAYSRESPONSE_H
#define QTAWS_LISTGATEWAYSRESPONSE_H

#include "storagegatewayresponse.h"
#include "listgatewaysrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListGatewaysResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListGatewaysResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListGatewaysResponse(const ListGatewaysRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGatewaysRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGatewaysResponse)
    Q_DISABLE_COPY(ListGatewaysResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
