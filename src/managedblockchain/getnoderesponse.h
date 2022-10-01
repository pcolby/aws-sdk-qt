// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNODERESPONSE_H
#define QTAWS_GETNODERESPONSE_H

#include "managedblockchainresponse.h"
#include "getnoderequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetNodeResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT GetNodeResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    GetNodeResponse(const GetNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetNodeResponse)
    Q_DISABLE_COPY(GetNodeResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
