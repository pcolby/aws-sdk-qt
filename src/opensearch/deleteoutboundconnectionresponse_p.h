// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTBOUNDCONNECTIONRESPONSE_P_H
#define QTAWS_DELETEOUTBOUNDCONNECTIONRESPONSE_P_H

#include "opensearchresponse_p.h"

namespace QtAws {
namespace OpenSearch {

class DeleteOutboundConnectionResponse;

class DeleteOutboundConnectionResponsePrivate : public OpenSearchResponsePrivate {

public:

    explicit DeleteOutboundConnectionResponsePrivate(DeleteOutboundConnectionResponse * const q);

    void parseDeleteOutboundConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteOutboundConnectionResponse)
    Q_DISABLE_COPY(DeleteOutboundConnectionResponsePrivate)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
