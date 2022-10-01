// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAPEPOOLSRESPONSE_H
#define QTAWS_LISTTAPEPOOLSRESPONSE_H

#include "storagegatewayresponse.h"
#include "listtapepoolsrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListTapePoolsResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListTapePoolsResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    ListTapePoolsResponse(const ListTapePoolsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListTapePoolsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListTapePoolsResponse)
    Q_DISABLE_COPY(ListTapePoolsResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
