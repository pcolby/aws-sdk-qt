// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMEMBERRESPONSE_P_H
#define QTAWS_UPDATEMEMBERRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class UpdateMemberResponse;

class UpdateMemberResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit UpdateMemberResponsePrivate(UpdateMemberResponse * const q);

    void parseUpdateMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateMemberResponse)
    Q_DISABLE_COPY(UpdateMemberResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
