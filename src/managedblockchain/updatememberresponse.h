// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERRESPONSE_H
#define QTAWS_UPDATEMEMBERRESPONSE_H

#include "managedblockchainresponse.h"
#include "updatememberrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class UpdateMemberResponsePrivate;

class QTAWSMANAGEDBLOCKCHAIN_EXPORT UpdateMemberResponse : public ManagedBlockchainResponse {
    Q_OBJECT

public:
    UpdateMemberResponse(const UpdateMemberRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateMemberRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateMemberResponse)
    Q_DISABLE_COPY(UpdateMemberResponse)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
