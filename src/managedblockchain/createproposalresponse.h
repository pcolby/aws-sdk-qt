// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROPOSALRESPONSE_H
#define QTAWS_CREATEPROPOSALRESPONSE_H

#include "managedblockchainresponse.h"
#include "createproposalrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateProposalResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT CreateProposalResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    CreateProposalResponse(const CreateProposalRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateProposalRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateProposalResponse)
    Q_DISABLE_COPY(CreateProposalResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
