// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPOSALRESPONSE_H
#define QTAWS_GETPROPOSALRESPONSE_H

#include "managedblockchainresponse.h"
#include "getproposalrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetProposalResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT GetProposalResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    GetProposalResponse(const GetProposalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetProposalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetProposalResponse)
    Q_DISABLE_COPY(GetProposalResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
