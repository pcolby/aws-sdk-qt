// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTORDERSRESPONSE_H
#define QTAWS_LISTORDERSRESPONSE_H

#include "privatenetworksresponse.h"
#include "listordersrequest.h"

namespace QtAws {
namespace PrivateNetworks {

class ListOrdersResponsePrivate;

class QTAWSPRIVATENETWORKS_EXPORT ListOrdersResponse : public PrivateNetworksResponse {
    Q_OBJECT

public:
    ListOrdersResponse(const ListOrdersRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListOrdersRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListOrdersResponse)
    Q_DISABLE_COPY(ListOrdersResponse)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
