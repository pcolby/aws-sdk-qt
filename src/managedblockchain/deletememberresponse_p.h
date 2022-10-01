// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMEMBERRESPONSE_P_H
#define QTAWS_DELETEMEMBERRESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class DeleteMemberResponse;

class DeleteMemberResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit DeleteMemberResponsePrivate(DeleteMemberResponse * const q);

    void parseDeleteMemberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMemberResponse)
    Q_DISABLE_COPY(DeleteMemberResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
