// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAPESRESPONSE_H
#define QTAWS_LISTTAPESRESPONSE_H

#include "storagegatewayresponse.h"
#include "listtapesrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListTapesResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListTapesResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListTapesResponse(const ListTapesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTapesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTapesResponse)
    Q_DISABLE_COPY(ListTapesResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
