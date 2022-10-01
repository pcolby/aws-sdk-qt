// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEOUTBOUNDCONNECTIONRESPONSE_H
#define QTAWS_CREATEOUTBOUNDCONNECTIONRESPONSE_H

#include "opensearchresponse.h"
#include "createoutboundconnectionrequest.h"

namespace QtAws {
namespace OpenSearch {

class CreateOutboundConnectionResponsePrivate;

class QTAWSOPENSEARCH_EXPORT CreateOutboundConnectionResponse : public OpenSearchResponse {
    Q_OBJECT

public:
    CreateOutboundConnectionResponse(const CreateOutboundConnectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateOutboundConnectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateOutboundConnectionResponse)
    Q_DISABLE_COPY(CreateOutboundConnectionResponse)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
