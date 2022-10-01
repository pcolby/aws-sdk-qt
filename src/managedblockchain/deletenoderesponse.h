// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENODERESPONSE_H
#define QTAWS_DELETENODERESPONSE_H

#include "managedblockchainresponse.h"
#include "deletenoderequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class DeleteNodeResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT DeleteNodeResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    DeleteNodeResponse(const DeleteNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteNodeResponse)
    Q_DISABLE_COPY(DeleteNodeResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
