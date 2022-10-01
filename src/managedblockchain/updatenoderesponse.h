// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENODERESPONSE_H
#define QTAWS_UPDATENODERESPONSE_H

#include "managedblockchainresponse.h"
#include "updatenoderequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class UpdateNodeResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT UpdateNodeResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    UpdateNodeResponse(const UpdateNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateNodeResponse)
    Q_DISABLE_COPY(UpdateNodeResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
