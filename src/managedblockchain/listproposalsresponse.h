// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROPOSALSRESPONSE_H
#define QTAWS_LISTPROPOSALSRESPONSE_H

#include "managedblockchainresponse.h"
#include "listproposalsrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListProposalsResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT ListProposalsResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    ListProposalsResponse(const ListProposalsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListProposalsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListProposalsResponse)
    Q_DISABLE_COPY(ListProposalsResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
