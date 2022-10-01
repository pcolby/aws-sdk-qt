// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACCEPTINBOUNDCONNECTIONRESPONSE_H
#define QTAWS_ACCEPTINBOUNDCONNECTIONRESPONSE_H

#include "opensearchresponse.h"
#include "acceptinboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class AcceptInboundConnectionResponsePrivate;

class QTAWSOPENSEARCH_EXPORT AcceptInboundConnectionResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    AcceptInboundConnectionResponse(const AcceptInboundConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AcceptInboundConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AcceptInboundConnectionResponse)
    Q_DISABLE_COPY(AcceptInboundConnectionResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
