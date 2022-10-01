// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODERESPONSE_H
#define QTAWS_CREATENODERESPONSE_H

#include "managedblockchainresponse.h"
#include "createnoderequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateNodeResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT CreateNodeResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    CreateNodeResponse(const CreateNodeRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateNodeRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateNodeResponse)
    Q_DISABLE_COPY(CreateNodeResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
