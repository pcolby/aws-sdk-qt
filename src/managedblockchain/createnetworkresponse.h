// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKRESPONSE_H
#define QTAWS_CREATENETWORKRESPONSE_H

#include "managedblockchainresponse.h"
#include "createnetworkrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateNetworkResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT CreateNetworkResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    CreateNetworkResponse(const CreateNetworkRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNetworkRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNetworkResponse)
    Q_DISABLE_COPY(CreateNetworkResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
