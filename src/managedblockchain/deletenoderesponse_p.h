// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENODERESPONSE_P_H
#define QTAWS_DELETENODERESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class DeleteNodeResponse;

class DeleteNodeResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit DeleteNodeResponsePrivate(DeleteNodeResponse * const q);

    void parseDeleteNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNodeResponse)
    Q_DISABLE_COPY(DeleteNodeResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
