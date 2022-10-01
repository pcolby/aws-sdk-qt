// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMEMBERRESPONSE_P_H
#define QTAWS_GETMEMBERRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetMemberResponse;

class GetMemberResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit GetMemberResponsePrivate(GetMemberResponse * const q);

    void parseGetMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMemberResponse)
    Q_DISABLE_COPY(GetMemberResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
