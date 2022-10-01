// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINBOUNDCONNECTIONRESPONSE_H
#define QTAWS_REJECTINBOUNDCONNECTIONRESPONSE_H

#include "opensearchresponse.h"
#include "rejectinboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class RejectInboundConnectionResponsePrivate;

class QTAWSOPENSEARCH_EXPORT RejectInboundConnectionResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    RejectInboundConnectionResponse(const RejectInboundConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RejectInboundConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RejectInboundConnectionResponse)
    Q_DISABLE_COPY(RejectInboundConnectionResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
