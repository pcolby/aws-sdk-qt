// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENODERESPONSE_P_H
#define QTAWS_CREATENODERESPONSE_P_H

#include "managedblockchainresponse_p.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateNodeResponse;

class CreateNodeResponsePrivate : public ManagedBlockchainResponsePrivate {

public:

    explicit CreateNodeResponsePrivate(CreateNodeResponse * const q);

    void parseCreateNodeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNodeResponse)
    Q_DISABLE_COPY(CreateNodeResponsePrivate)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
