// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEMEMBERRESPONSE_H
#define QTAWS_CREATEMEMBERRESPONSE_H

#include "managedblockchainresponse.h"
#include "creatememberrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateMemberResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT CreateMemberResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    CreateMemberResponse(const CreateMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateMemberResponse)
    Q_DISABLE_COPY(CreateMemberResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
