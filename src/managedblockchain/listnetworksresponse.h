// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSRESPONSE_H
#define QTAWS_LISTNETWORKSRESPONSE_H

#include "managedblockchainresponse.h"
#include "listnetworksrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListNetworksResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ListNetworksResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    ListNetworksResponse(const ListNetworksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListNetworksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListNetworksResponse)
    Q_DISABLE_COPY(ListNetworksResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
