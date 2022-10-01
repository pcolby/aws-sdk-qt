// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPROTOCOLSLISTRESPONSE_P_H
#define QTAWS_DELETEPROTOCOLSLISTRESPONSE_P_H

#include "fmsresponse_p.h"

namespace QtAws {
namespace Fms {

class DeleteProtocolsListResponse;

class DeleteProtocolsListResponsePrivate : public FmsResponsePrivate {

public:

    explicit DeleteProtocolsListResponsePrivate(DeleteProtocolsListResponse * const q);

    void parseDeleteProtocolsListResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteProtocolsListResponse)
    Q_DISABLE_COPY(DeleteProtocolsListResponsePrivate)

};

} // namespace Fms
} // namespace QtAws

#endif
