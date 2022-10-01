// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEOUTBOUNDCONNECTIONRESPONSE_H
#define QTAWS_DELETEOUTBOUNDCONNECTIONRESPONSE_H

#include "opensearchresponse.h"
#include "deleteoutboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteOutboundConnectionResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DeleteOutboundConnectionResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DeleteOutboundConnectionResponse(const DeleteOutboundConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteOutboundConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteOutboundConnectionResponse)
    Q_DISABLE_COPY(DeleteOutboundConnectionResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
