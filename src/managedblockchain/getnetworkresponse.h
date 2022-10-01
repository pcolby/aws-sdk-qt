// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESPONSE_H
#define QTAWS_GETNETWORKRESPONSE_H

#include "managedblockchainresponse.h"
#include "getnetworkrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetNetworkResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT GetNetworkResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    GetNetworkResponse(const GetNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNetworkResponse)
    Q_DISABLE_COPY(GetNetworkResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
