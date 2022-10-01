// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROTOCOLSLISTRESPONSE_P_H
#define QTAWS_GETPROTOCOLSLISTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class GetProtocolsListResponse;

class GetProtocolsListResponsePrivate : public FmsResponsePrivate {

public:

    explicit GetProtocolsListResponsePrivate(GetProtocolsListResponse * const q);

    void parseGetProtocolsListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetProtocolsListResponse)
    Q_DISABLE_COPY(GetProtocolsListResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
