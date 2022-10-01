// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINBOUNDCONNECTIONRESPONSE_H
#define QTAWS_DELETEINBOUNDCONNECTIONRESPONSE_H

#include "opensearchresponse.h"
#include "deleteinboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class DeleteInboundConnectionResponsePrivate;

class QTAWSOPENSEARCH_EXPORT DeleteInboundConnectionResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    DeleteInboundConnectionResponse(const DeleteInboundConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteInboundConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteInboundConnectionResponse)
    Q_DISABLE_COPY(DeleteInboundConnectionResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
