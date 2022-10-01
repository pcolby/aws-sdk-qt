// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPROTOCOLSLISTRESPONSE_P_H
#define QTAWS_PUTPROTOCOLSLISTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class PutProtocolsListResponse;

class PutProtocolsListResponsePrivate : public FmsResponsePrivate {

public:

    explicit PutProtocolsListResponsePrivate(PutProtocolsListResponse * const q);

    void parsePutProtocolsListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutProtocolsListResponse)
    Q_DISABLE_COPY(PutProtocolsListResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
